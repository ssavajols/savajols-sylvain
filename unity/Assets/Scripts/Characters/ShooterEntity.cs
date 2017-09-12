using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShooterEntity : MonoBehaviour
{
	ShooterWeaponEntity weaponScript;

	public int health = 100;
	public int powerAttack = 1;
	public GameObject[] weapons;
	public GameObject equipedWeapon;

	// Use this for initialization
	void Start ()
	{
		setWeapon (0);
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	public void hitted (int hit)
	{
		health -= hit;

		if (health <= 0) {
			die ();
		}
	}

	public void attack ()
	{
		if (equipedWeapon != null) {
			weaponScript.fire (powerAttack);	
		}
	}

	protected void die ()
	{
		if (tag != "Player") {
			Destroy (gameObject);	
		}

	}

	protected void setWeapon (int index = 0)
	{
		if (weapons.Length > 0) {
			equipedWeapon = weapons [index];
			weaponScript = equipedWeapon.GetComponent<ShooterWeaponEntity> ();
		}
	}
}
