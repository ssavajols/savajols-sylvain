using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoFireIA : MonoBehaviour
{

	CoolDown coolDown;

	public float frequency = 1;

	// Use this for initialization
	protected void Start ()
	{
		coolDown = new CoolDown (0, frequency);
	}


	protected void FixedUpdate ()
	{
		coolDown.Update ();
	}

	// Update is called once per frame
	void Update ()
	{
		if (coolDown.isCool) {
			coolDown.prevent ();
			gameObject.GetComponent<ShooterEntity> ().attack ();
		}
	}
}
