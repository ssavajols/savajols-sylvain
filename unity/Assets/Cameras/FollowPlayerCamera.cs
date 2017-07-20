using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPlayerCamera : BaseCamera
{

	public GameObject follower;
	public bool allowY = true;
	public float offsetX = 1f;
	public float offsetY = 0.5f;
	// to have camera fixed on player set to 0F
	public float cameraSpeed = 0.5f;
	// to have to delay with camera's move, set to 10F

	// Use this for initialization
	new void Start ()
	{
		base.Start ();
	}

	// Update is called once per frame
	new protected void LateUpdate ()
	{
		if (!isActive) {
			return;
		}

		transform.position = calcPosition ();
	}

	new protected Vector3 calcPosition ()
	{

		var velocity = follower.GetComponent<Rigidbody2D> ().velocity;

		var vX = velocity.x * offsetX;
		var vY = velocity.y * offsetY;
		var fX = follower.transform.position.x;
		var fY = follower.transform.position.y;

		var position = new Vector3 (fX + vX, fY + vY, follower.transform.position.z);

		var vec = Vector3.MoveTowards (transform.position, position, cameraSpeed);

		if (allowY) {
			return new Vector3 (vec.x, vec.y, transform.position.z);	
		} else {
			return new Vector3 (vec.x, transform.position.y, transform.position.z);	
		}

	}
}
