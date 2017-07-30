using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputController : MonoBehaviour
{

	public bool rightButton = false;
	public bool leftButton = false;
	public bool jumpButton = false;
	public bool activateButton = false;
	public bool shiftButton = false;

	// Use this for initialization
	void Start ()
	{
	}

	protected void FixedUpdate ()
	{
		rightButton = false;
		leftButton = false;
		jumpButton = false;
		activateButton = false;
		shiftButton = false;

		if (Input.GetKey ("left shift") || Input.GetKey ("right shift")) {
			shiftButton = true;
		}

		if (Input.GetKey ("right")) {
			rightButton = true;
			invoke ("rightButton");
		}
			
		if (Input.GetKey ("left")) {
			leftButton = true;
			invoke ("leftButton");
		}

		if (Input.GetKey ("space")) {
			jumpButton = true;
			invoke ("jumpButton");
		}

		if (Input.GetKey ("return")) {
			activateButton = true;
			invoke ("activateButton");
		}
			
	}

	void invoke (string methodName)
	{
		var script = gameObject.GetComponent<Character> ();

		var _m = script.GetType ().GetMethod (methodName);

		if (_m != null) {
			_m.Invoke (script, null);
		}	

	}

}
