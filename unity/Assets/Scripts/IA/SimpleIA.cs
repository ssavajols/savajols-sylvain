using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleIA : MonoBehaviour
{

	public bool goLeft = true;
	public float speed = 3F;

	Vector2 currentVelocity;
	public Rigidbody2D rb;

	// Use this for initialization
	protected void Start ()
	{

		rb = GetComponent<Rigidbody2D> ();
		if (goLeft) {
			currentVelocity = new Vector2 (-1, 0);
		} else {
			currentVelocity = new Vector2 (1, 0);
		}
	}

	void OnCollisionEnter2D (Collision2D coll)
	{
		// touch from left
		if (coll.contacts [0].normal.x > 0) {
			currentVelocity = new Vector2 (1, 0);

			// touch from right
		} else if (coll.contacts [0].normal.x < 0) {
			currentVelocity = new Vector2 (-1, 0);
		}
	
	}

	// Update is called once per frame
	protected void Update ()
	{
		rb.velocity = currentVelocity * speed;
		transform.localScale = new Vector2 (currentVelocity.x < 0 ? -1 : 1, 1);
	}
}
