using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShooterPlayer : ShooterEntity
{

	//	Rigidbody2D rb;
	Animator anim;
	InputController inputController;
	BlinkRenderer blinkingRenderer;
	Rigidbody2D rb;

	bool canBeHitted = true;
	bool isDying = false;

	public GameObject[] fireBullets;
	public float speed = 1;

	// Use this for initialization
	void Start ()
	{
		setWeapon (0);

		inputController = GetComponent<InputController> ();
		anim = GetComponent<Animator> ();
		rb = GetComponent<Rigidbody2D> ();
		blinkingRenderer = GetComponent<BlinkRenderer> ();

		if (rb == null) {
			rb = gameObject.AddComponent<Rigidbody2D> ();
		}

		if (blinkingRenderer == null) {
			blinkingRenderer = gameObject.AddComponent<BlinkRenderer> ();
		}
	
		rb.isKinematic = true;

		startDying ();


	}

	void OnTriggerStay2D (Collider2D coll)
	{
		switch (coll.gameObject.tag) {
		case "Platform":
		case "EnnemyBullet":
		case "Ennemy":
			if (canBeHitted) {
				startDying ();	
			}
			break;
		}
	}

	void FixedUpdate ()
	{
		if (inputController.rightButton) {
			goRight ();
		} else if (inputController.leftButton) {
			goLeft ();
		}
		if (inputController.upButton) {
			goUp ();
		} else if (inputController.downButton) {
			goDown ();
		}
		if (inputController.fireButton) {
			fireBullet ();
		}

		if (isDying) {
			gameObject.transform.position = Vector2.MoveTowards (gameObject.transform.position, Camera.main.transform.position, 0.02F);
			if (gameObject.transform.position.y > (Camera.main.transform.position.y - Camera.main.orthographicSize / 3)) {
				stopDying ();
			}
		}

	}

	void startDying ()
	{
		blinkingRenderer.setBlinking (true, 10);
		inputController.disableControls ();
		isDying = true;
		canBeHitted = false;
		gameObject.transform.position = 
			new Vector2 (
			Camera.main.transform.position.x, 
			Camera.main.transform.position.y - Camera.main.orthographicSize - 0.2F);
	}

	void stopDying ()
	{
		inputController.enableControls ();
		isDying = false;
		StartCoroutine (wait (2));
	}
	
	// Update is called once per frame
	new void Update ()
	{
	}

	IEnumerator wait (int seconds)
	{
		yield return new WaitForSeconds (1);
		blinkingRenderer.setBlinking (false);
		canBeHitted = true;
	}

	void goRight ()
	{
		if (gameObject.transform.position.x < CameraEdgeDetect.getCameraEdge ("RIGHT")) {
			gameObject.transform.position += new Vector3 (1 * speed, 0, 0);	
		}

	}

	void goLeft ()
	{
		if (gameObject.transform.position.x > CameraEdgeDetect.getCameraEdge ("LEFT")) {
			gameObject.transform.position += new Vector3 (-1 * speed, 0, 0);
		}
	}

	void goUp ()
	{
		if (gameObject.transform.position.y < CameraEdgeDetect.getCameraEdge ("UP")) {
			gameObject.transform.position += new Vector3 (0, 1 * speed, 0);
		}
	}

	void goDown ()
	{
		if (gameObject.transform.position.y > CameraEdgeDetect.getCameraEdge ("DOWN")) {
			gameObject.transform.position += new Vector3 (0, -1 * speed, 0);
		}
	}

	void fireBullet ()
	{
		attack ();
	}

	void playAnimation (string animationName)
	{
		if (anim != null) {
			anim.Play (animationName);
		}
	}
}
