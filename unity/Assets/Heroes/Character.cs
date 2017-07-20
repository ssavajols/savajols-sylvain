using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
	
	public Rigidbody2D rb;
	public float speed;
	public float speedRun;
	public float jumpForce;

	bool isOnGround = false;

	public Animator animations;

	CoolDown coolJump = new CoolDown (0, 0.01F);
	CoolDown coolRight = new CoolDown (0, 0.1F);
	CoolDown coolLeft = new CoolDown (0, 0.1F);

	// Use this for initialization
	protected void Start ()
	{
		rb = GetComponent<Rigidbody2D> ();
		animations = GetComponent<Animator> ();
	}

	void OnCollisionStay2D (Collision2D coll)
	{
		var _isOnGround = false;

		for (var i = 0; i < coll.contacts.Length; i++) {
			if (coll.contacts [i].normal.x >= 1) {
				coolLeft.prevent ();
			}

			if (coll.contacts [i].normal.x <= -1) {
				coolRight.prevent ();
			}

			if (coll.contacts [i].normal.y > 0) {
				_isOnGround = true;
			}
		}



		isOnGround = _isOnGround;


	}

	void OnCollisionExit2D (Collision2D coll)
	{
		isOnGround = false;
	}


	protected void  Update ()
	{
		coolJump.Update ();
		coolLeft.Update ();
		coolRight.Update ();

		if (!isOnGround) {
			coolJump.prevent ();
		}

		if (!isOnGround && rb.velocity.y > 0) {
			animations.Play (AnimationsNameModel.jump);
			animations.speed = 1;
		} else if (!isOnGround && rb.velocity.y < 0) {
			animations.Play (AnimationsNameModel.jumpFall);
			animations.speed = 1;
		} else if (Mathf.Abs (rb.velocity.x) > 0) {
			animations.Play (AnimationsNameModel.walk);
			animations.speed = Mathf.Min (1, Mathf.Max (0, Mathf.Abs (rb.velocity.x)));	
		} else {
			animations.Play (AnimationsNameModel.stand);
			animations.speed = 1;
		}

	}

	public void goRight (bool run)
	{
		if (!coolRight.isCool) {
			return;
		}

		var velocity = run ? 1 * speedRun : 1 * speed;

		transform.localScale = new Vector2 (1, 1);
		rb.velocity = new Vector2 (velocity, rb.velocity.y);
	}

	public void goLeft (bool run)
	{
		if (!coolLeft.isCool) {
			return;
		}

		var velocity = run ? 1 * speedRun : 1 * speed;

		transform.localScale = new Vector2 (-1, 1);
		rb.velocity = new Vector2 (-velocity, rb.velocity.y);
	}

	public void jump ()
	{

		coolJump.prevent ();
		if (!coolJump.isCool) {
			return;
		}
			
		rb.velocity = new Vector2 (rb.velocity.x, jumpForce);

	}
}
