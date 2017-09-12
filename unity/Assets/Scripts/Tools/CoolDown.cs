using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoolDown
{
	
	float coolDown;
	float coolDownValue;

	public bool isCool = true;

	public CoolDown (float cool = 0, float coolV = 0.1F)
	{
		coolDown = cool;
		coolDownValue = coolV;
	}

	/**
	 * @desc 
	 * prevent too much call
	 * Set coolDownValue to coolDown timer
	 */
	public void prevent ()
	{
		coolDown = coolDownValue;
	}

	// Update is called once per frame
	/**
	 * @desc 
	 * must be called on each frame
	 */
	public void Update ()
	{
		coolDown = coolDown > 0 ? coolDown - Time.deltaTime : 0;	
		isCool = coolDown == 0;
	}
}
