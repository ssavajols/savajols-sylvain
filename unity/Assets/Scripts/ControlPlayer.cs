using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlPlayer : MonoBehaviour
{

	Character p;
	public GameObject player;

	// Use this for initialization
	void Start ()
	{
		p = (Character)player.GetComponent<Character> ();
	}

	protected void FixedUpdate ()
	{
		if (Input.GetKey ("right")) {
			p.goRight (Input.GetKey ("left shift") || Input.GetKey ("right shift"));
		}

		if (Input.GetKey ("left")) {
			p.goLeft (Input.GetKey ("left shift") || Input.GetKey ("right shift"));
		}

		if (Input.GetKey ("space")) {
			p.jump ();
		}

		if (Input.GetKey ("return")) {
			var _m = p.GetType ().GetMethod ("activate");

			if (_m != null) {
				_m.Invoke (p, null);
			}

		}
			
	}

}
