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
		p.rightButton = false;
		p.leftButton = false;
		p.jumpButton = false;
		p.activateButton = false;


		if (Input.GetKey ("right")) {
			p.goRight (Input.GetKey ("left shift") || Input.GetKey ("right shift"));
			p.rightButton = true;
		}

//		if (Input.GetKeyUp ("right")) {
//			p.rightButton = false;
//		}
//
		if (Input.GetKey ("left")) {
			p.goLeft (Input.GetKey ("left shift") || Input.GetKey ("right shift"));
			p.leftButton = true;
		}

//		if (Input.GetKeyUp ("right")) {
//			p.leftButton = false;
//		}

		if (Input.GetKey ("space")) {
			p.jump ();
			p.jumpButton = true;
		}

//		if (Input.GetKeyUp ("space")) {
//			p.jumpButton = false;
//		}

		if (Input.GetKey ("return")) {
			p.activateButton = true;
			var _m = p.GetType ().GetMethod ("activate");

			if (_m != null) {
				_m.Invoke (p, null);
			}
		}

//		if (Input.GetKeyUp ("return")) {
//			p.activateButton = false;
//		}
			
	}

}
