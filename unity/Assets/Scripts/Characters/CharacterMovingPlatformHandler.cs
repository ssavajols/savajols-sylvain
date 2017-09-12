using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterMovingPlatformHandler : MonoBehaviour
{

	GameObject platforms = null;

	float storedGravity;
	Transform storedParent;
	bool storedKinematic;

	Rigidbody2D rb;

	CoolDown reconnect = new CoolDown (0, 0.1f);

	// Use this for initialization
	void Start ()
	{
		rb = GetComponent<Rigidbody2D> ();
	}
	
	// Update is called once per frame
	void Update ()
	{
		reconnect.Update ();
		if (reconnect.isCool) {
//			connect (plat	forms);
		}	
	}

	void FixedUpdate ()
	{
		if (Input.GetKey ("space")) {
			disconnect (true);
			reconnect.prevent ();
		}

		if (Input.GetKey ("left") || Input.GetKey ("right")) {
			disconnect (false);
			reconnect.prevent ();
		}
			
	}

	void OnCollisionEnter2D (Collision2D coll)
	{
		if (coll.gameObject.tag == "MovingPlatform") {
			if (coll.gameObject.GetComponent<RelativeJoint2D> () != null) {

				connect (coll.gameObject);

			}
		}
	}

	void OnCollisionExit2D ()
	{
		disconnect ();
	}

	void connect (GameObject toConnect)
	{
		if (toConnect != null) {
			storedGravity = rb.gravityScale;
			rb.gravityScale = 0;
			platforms = toConnect;
			platforms.GetComponent<RelativeJoint2D> ().connectedBody = rb;		
		}

	}

	void disconnect (bool removePlatform = true)
	{
		if (platforms != null) {
			rb.gravityScale = storedGravity;
			rb.velocity = Vector2.zero;
			platforms.GetComponent<RelativeJoint2D> ().connectedBody = null;

			if (removePlatform) {
				platforms = null;
			}
		}
	}

}
