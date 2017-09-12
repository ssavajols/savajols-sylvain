using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShooterWeaponBasicRotation : ShooterWeaponBasic
{

	ShooterWeaponEntity weaponEntity;

	public float speedRotation = 1;

	// Update is called once per frame
	new void FixedUpdate ()
	{
		base.FixedUpdate ();
		transform.Rotate (Vector3.forward, speedRotation * Time.fixedDeltaTime);
	}
}
