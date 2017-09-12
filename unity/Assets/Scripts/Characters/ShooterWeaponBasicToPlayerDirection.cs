using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShooterWeaponBasicToPlayerDirection : ShooterWeaponBasic
{

	public GameObject player;

	new void FixedUpdate ()
	{
		base.FixedUpdate ();

		transform.rotation = Calc.lookAt2D (player, gameObject);

	}
}
