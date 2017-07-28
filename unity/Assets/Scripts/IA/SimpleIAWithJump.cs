using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleIAWithJump : SimpleIA
{

	CoolDown cool = new CoolDown (0, 5F);
	
	// Update is called once per frame
	new protected void Update ()
	{
		base.Update ();

		if (cool.isCool) {
			rb.AddForce (new Vector2 (0, 5f));
		}
			
	}
}
