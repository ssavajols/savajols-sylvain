using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaypointFollower : MonoBehaviour
{

	public GameObject wayPoints;

	public int currentWaypoint = -1;
	public float speed = 1;

	public bool changeOnTouchWaypoint = true;
	public bool followWaypoint = true;
	public bool loop = true;
	public bool destroyObjectAtEndPoint = false;
	public bool destroyWaypointsAtEndPoint = false;
	public bool useRigidBodyForces = false;
	public bool useRigidBodyVelocity = false;

	Vector3 nextWaypointPosition;
	Rigidbody2D rb;
	Animator anim;

	List<Transform> path;

	// Use this for initialization
	void Start ()
	{
		rb = GetComponent<Rigidbody2D> ();
		anim = GetComponent<Animator> ();

		if ((useRigidBodyForces || useRigidBodyVelocity) && rb == null) {
			rb = gameObject.AddComponent<Rigidbody2D> ();
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (path == null) {
			path = getPaths ();
		}
		if (currentWaypoint == -1) {
			getNextWaypoint ();	
		}

		if (followWaypoint) {
			if (useRigidBodyForces || useRigidBodyVelocity) {
				calcWithRigidBody ();
			} else {
				calcWithPosition ();
			}	
		}
			
		if (gameObject.transform.position == path [currentWaypoint].position) {
			getNextWaypoint ();
		}
	}

	void OnTriggerStay2D (Collider2D coll)
	{
		if (changeOnTouchWaypoint && coll.gameObject == path [currentWaypoint].gameObject) {
			getNextWaypoint ();
		}
	}

	void calcWithRigidBody ()
	{
		var target = path [currentWaypoint].position;
		var source = gameObject.transform.position;
		var force = (target - source).normalized * speed;
			
		if (useRigidBodyForces) {
			rb.AddForce (force);
		} else if (useRigidBodyVelocity) {
			rb.velocity = force;	
		}

		if (anim != null) {
			anim.speed = Mathf.Abs (rb.velocity.x) / 1;
		}

		setLocalScale (rb.velocity.x < 0);

	}

	void calcWithPosition ()
	{
		gameObject.transform.position = Vector3.MoveTowards (gameObject.transform.position, path [currentWaypoint].position, Time.deltaTime * speed);


		if (anim != null) {
			anim.speed = Mathf.Abs (rb.velocity.x) / 1;
		}

		setLocalScale (gameObject.transform.position.x > path [currentWaypoint].position.x);
	}

	void getNextWaypoint ()
	{
		
		currentWaypoint++;

		if (currentWaypoint >= path.Count && loop) {
			currentWaypoint = 0;
		}

		if (currentWaypoint >= path.Count && !loop) {
			currentWaypoint = path.Count - 1;
		}

		if (currentWaypoint >= path.Count && destroyWaypointsAtEndPoint && destroyObjectAtEndPoint) {
			Destroy (gameObject.transform.parent.gameObject);
		} else {
			
			if (currentWaypoint >= path.Count && destroyObjectAtEndPoint) {
				Destroy (gameObject);
			}

			if (currentWaypoint >= path.Count && destroyWaypointsAtEndPoint) {
				Destroy (wayPoints);
			}
		}
	}

	List<Transform> getPaths ()
	{
		return wayPoints.GetComponent<WaypointBuilderScript> ().wayPoints;
	}

	void setLocalScale (bool reverse)
	{
		if (reverse) {

			gameObject.transform.localScale = new Vector3 (
				-Mathf.Abs (gameObject.transform.localScale.x), 
				gameObject.transform.localScale.y,
				gameObject.transform.localScale.z);
		} else {
			gameObject.transform.localScale = new Vector3 (
				Mathf.Abs (gameObject.transform.localScale.x), 
				gameObject.transform.localScale.y,
				gameObject.transform.localScale.z);
		}
	}
}
