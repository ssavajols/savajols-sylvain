using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ennemy : MonoBehaviour
{

	public GameObject[] ennemyExplosion;

	// Use this for initialization
	void Start ()
	{
		
	}

	void OnCollisionEnter2D (Collision2D coll)
	{
		// touch from up
		if (coll.contacts [0].normal.y < 0 && coll.gameObject.tag == "Player") {
			var rb = coll.gameObject.GetComponent<Rigidbody2D> ();

			rb.AddForce (new Vector2 (0, coll.gameObject.GetComponent<Character> ().jumpForce / 2));
			hitted ();
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	void hitted ()
	{
		
		Destroy (gameObject);
		createEnnemyExplosion ();
	}

	void createEnnemyExplosion ()
	{
		if (ennemyExplosion.Length > 0) {
			var explosion = Instantiate (ennemyExplosion [Random.Range (0, ennemyExplosion.Length - 1)]);
			explosion.transform.parent = gameObject.transform.parent;
			explosion.transform.position = gameObject.transform.position;	
		}

	}
}
