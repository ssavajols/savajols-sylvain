using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ennemy : MonoBehaviour
{

	// Use this for initialization
	void Start ()
	{
		
	}

	void OnCollisionEnter2D (Collision2D coll)
	{
		// touch from up
		if (coll.contacts [0].normal.y < 0 && coll.gameObject.tag == "Player") {
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
	}
}
