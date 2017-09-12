using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShooterEnnemy : ShooterEntity
{

	public bool destroyOnDeathZoneTouch = true;

	// Use this for initialization
	void Start ()
	{
		setWeapon (0);
		if (destroyOnDeathZoneTouch) {
			var destroyOnTouch = gameObject.AddComponent<DestroyGameObjectOnDeathZoneTouch> ();

			destroyOnTouch.destroyCallback = OnDeathZoneTouched;
		}
	}

	public void OnDeathZoneTouched (GameObject go)
	{
		Debug.Log (go == gameObject);
	}
	
	// Update is called once per frame
	void Update ()
	{

		enabled = CameraEdgeDetect.isVisibleByMainCamera (gameObject);

	}

}
