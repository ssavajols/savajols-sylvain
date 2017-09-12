using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputController : MonoBehaviour
{
	bool controlsEnabled = true;

	public bool rightButton = false;
	public bool leftButton = false;
	public bool upButton = false;
	public bool downButton = false;
	public bool jumpButton = false;
	public bool fireButton = false;
	public bool activateButton = false;
	public bool shiftButton = false;


	// Use this for initialization
	void Start ()
	{
	}



	void resetButtonsState ()
	{
		rightButton = false;
		leftButton = false;
		upButton = false;
		downButton = false;
		jumpButton = false;
		fireButton = false;
		activateButton = false;
		shiftButton = false;
	}

	void invoke (string methodName)
	{
		var script = gameObject.GetComponent<Player> ();

		if (script != null) {
			var _m = script.GetType ().GetMethod (methodName);

			if (_m != null) {
				_m.Invoke (script, null);
			}	
		}

	}

	protected void FixedUpdate ()
	{

		if (!controlsEnabled) {
			return; 
		}

		resetButtonsState ();

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

		if (Input.GetKey ("up")) {
			upButton = true;
			invoke ("upButton");
		}

		if (Input.GetKey ("down")) {
			downButton = true;
			invoke ("downButton");
		}

		if (Input.GetKey ("space")) {
			jumpButton = true;
			invoke ("jumpButton");
		}

		if (Input.GetKey ("space")) {
			fireButton = true;
			invoke ("fireButton");
		}

		if (Input.GetKey ("return")) {
			activateButton = true;
			invoke ("activateButton");
		}

	}

	public void disableControls ()
	{
		controlsEnabled = false;
		resetButtonsState ();
	}

	public void enableControls ()
	{

		controlsEnabled = true;
		resetButtonsState ();
	}

}
