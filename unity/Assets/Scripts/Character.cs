using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Character : MonoBehaviour
{


	BlinkRenderer blinkingRenderer;
	CharacterSounds sounds;

	CoolDown coolJump = new CoolDown (0, 0.01F);
	CoolDown coolRight = new CoolDown (0, 0.1F);
	CoolDown coolLeft = new CoolDown (0, 0.1F);

	bool isOnGround = false;

	public int step = 20;
	public float speed;
	public float speedRun;
	public float jumpForce = 500;

	public GameObject jumpDust;
	public GameObject fallDust;
	public Rigidbody2D rb;
	public Animator animations;
	public InputController inputs;

	// Use this for initialization
	protected void Start ()
	{
		sounds = GetComponent<CharacterSounds> ();
		rb = GetComponent<Rigidbody2D> ();
		animations = GetComponent<Animator> ();
		inputs = GetComponent<InputController> ();
		blinkingRenderer = GetComponent<BlinkRenderer> ();
	}

	void OnCollisionEnter2D (Collision2D coll)
	{
		if (coll.gameObject.tag == "Platform" && coll.contacts [0].normal.y > 0) {
			createDust (fallDust);

			sounds.playFall ();
		}

		if (coll.gameObject.tag == "Ennemy") {
			rb.AddForce (new Vector2 (coll.contacts [0].normal.x * (jumpForce / 3), jumpForce / 3));

			if (coll.contacts [0].normal.y <= 0) {
				setBlinking ();	
			}
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

	void setBlinking ()
	{
		
		if (blinkingRenderer != null) {
			blinkingRenderer.blinkSpeed = 0.05f;
			blinkingRenderer.setBlinking (true, 1.5F);
		}
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

	public void rightButton ()
	{
		if (!coolRight.isCool) {
			return;
		}

		var velocity = inputs.shiftButton ? 1 * speedRun : 1 * speed;

		transform.localScale = new Vector2 (Mathf.Abs (transform.localScale.x), Mathf.Abs (transform.localScale.x));

		rb.velocity = new Vector2 (velocity, rb.velocity.y);
	}

	public void leftButton ()
	{
		if (!coolLeft.isCool) {
			return;
		}

		var velocity = inputs.shiftButton ? 1 * speedRun : 1 * speed;

		transform.localScale = new Vector2 (-Mathf.Abs (transform.localScale.x), Mathf.Abs (transform.localScale.x));

		rb.velocity = new Vector2 (-velocity, rb.velocity.y);
	}

	public void jumpButton ()
	{
		
		coolJump.prevent ();
		if (!coolJump.isCool) {
			return;
		}

		createDust (jumpDust);
		sounds.playJump ();
			
		rb.AddForce (new Vector2 (0, jumpForce));

	}

	public void activateButton ()
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

	public void OnDeathZoneTouch ()
	{

		SceneManager.LoadScene (SceneManager.GetActiveScene ().name);	
	}
}
