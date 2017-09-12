using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyGameObjectOnDeathZoneTouch : MonoBehaviour
{

	public delegate void DestroyCallback (GameObject go);

	public DestroyCallback destroyCallback;

	void OnTriggerStay2D (Collider2D coll)
	{
		if (coll.gameObject.tag == "DeathZone") {
			Destroy (gameObject);

			if (destroyCallback != null) {
				destroyCallback (gameObject);
			}

		}
	}

	// Use this for initialization
	void Start ()
	{
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}
}
