using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShooterWeaponEntity : MonoBehaviour
{

	CoolDown cool;

	public int powerFactor = 1;
	public GameObject[] bullets;
	public float speedFactor = 1;
	public float frequency = 0.1F;

	// Use this for initialization
	protected void Awake ()
	{
		cool = new CoolDown (0, frequency);
	}
	
	// Update is called once per frame
	protected void FixedUpdate ()
	{
		cool.Update ();
	}

	public GameObject fire (int powerFired)
	{

		GameObject go = null;

		if (bullets.Length > 0 && cool.isCool) {
			go = Instantiate (
				getRandomBullet ());	
			ShooterWeaponBulletEntity script = go.GetComponent<ShooterWeaponBulletEntity> ();
			go.tag = tag;
			go.transform.position = transform.position;
			go.transform.localRotation = transform.rotation;
			go.transform.parent = Camera.main.transform;	
			script.powerFactor = powerFired * powerFactor;
			script.speedFactor = speedFactor;

			cool.prevent ();
		}

		return go;
	}

	GameObject getRandomBullet ()
	{
		return bullets [Random.Range (0, bullets.Length)];
	}
}
