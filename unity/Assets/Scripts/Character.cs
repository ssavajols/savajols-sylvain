using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{

	public GameObject jumpDust;
	public GameObject fallDust;
	public Rigidbody2D rb;

	public float speed;
	public float speedRun;
	public float jumpForce;

	public Animator animations;

	public bool jumpButton = false;
	public bool leftButton = false;
	public bool rightButton = false;
	public bool activateButton = false;

	CharacterSounds sounds;

	bool isOnGround = false;

	CoolDown coolJump = new CoolDown (0, 0.01F);
	CoolDown coolRight = new CoolDown (0, 0.1F);
	CoolDown coolLeft = new CoolDown (0, 0.1F);

	// Use this for initialization
	protected void Start ()
	{
		sounds = GetComponent<CharacterSounds> ();
		rb = GetComponent<Rigidbody2D> ();
		animations = GetComponent<Animator> ();
	}

	void OnCollisionEnter2D (Collision2D coll)
	{
		if (coll.gameObject.tag == "Platform" && coll.contacts [0].normal.y > 0) {
			createDust (fallDust);

			sounds.playFall ();
		}
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

	protected void Update ()
	{
	
	}

	protected void  FixedUpdate ()
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
			animations.Play (AnimationsNameModel.run);
			animations.speed = Mathf.Max (0, Mathf.Abs (rb.velocity.x / speed));	
		} else {
			animations.Play (AnimationsNameModel.idle);
			animations.speed = 1;
		}

	}

	public void goRight (bool run)
	{
		if (!coolRight.isCool) {
			return;
		}

		var velocity = run ? 1 * speedRun : 1 * speed;

		transform.localScale = new Vector2 (Mathf.Abs (transform.localScale.x), Mathf.Abs (transform.localScale.x));
		rb.velocity = new Vector2 (velocity, rb.velocity.y);
	}

	public void goLeft (bool run)
	{
		if (!coolLeft.isCool) {
			return;
		}

		var velocity = run ? 1 * speedRun : 1 * speed;

		transform.localScale = new Vector2 (-Mathf.Abs (transform.localScale.x), Mathf.Abs (transform.localScale.x));
		rb.velocity = new Vector2 (-velocity, rb.velocity.y);
	}

	public void jump ()
	{
		
		coolJump.prevent ();
		if (!coolJump.isCool) {
			return;
		}

		createDust (jumpDust);
		sounds.playJump ();
			
		rb.velocity = new Vector2 (rb.velocity.x, jumpForce);

	}

	public void activate ()
	{
		Debug.Log ("activate press");
	}

	void createDust (GameObject dustObject)
	{
		var dust = Instantiate (dustObject);

		dust.transform.SetParent (gameObject.transform.parent.transform);

		dust.transform.position = gameObject.transform.position;
		var dustScale = dust.transform.localScale;

		if (gameObject.transform.localScale.x < 0) {
			dust.transform.localScale = new Vector3 (-Mathf.Abs (dustScale.x), dustScale.y, dustScale.z);	
		} else {
			dust.transform.localScale = new Vector3 (Mathf.Abs (dustScale.x), dustScale.y, dustScale.z);	
		}

	}
}
