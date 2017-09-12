using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShooterWeaponBulletEntity : MonoBehaviour
{

	BoxCollider2D boxCollider2D;
	Rigidbody2D rb;

	float lifeTime = 0;
	float timeoutLifeTime = 5;

	int power = 1;
	float speed = 1;

	public int powerFactor = 1;
	public float speedFactor = 1;

	// Use this for initialization
	void Start ()
	{
		boxCollider2D = gameObject.AddComponent<BoxCollider2D> ();
		boxCollider2D.autoTiling = true;
		boxCollider2D.isTrigger = true;

		rb = gameObject.AddComponent<Rigidbody2D> ();
		rb.isKinematic = true;
	}

	void OnTriggerStay2D (Collider2D coll)
	{
		if (coll.gameObject.tag == "Player" && gameObject.tag == "EnnemyBullet") {
			hit (coll.GetComponent<ShooterEntity> ());
		}
	
		if (coll.gameObject.tag == "Ennemy" && gameObject.tag == "PlayerBullet") {
			hit (coll.GetComponent<ShooterEntity> ());
		}
	}

	void hit (ShooterEntity entity)
	{
		entity.hitted (power * powerFactor);
		Destroy (gameObject);
	}
	
	// Update is called once per frame
	void Update ()
	{
		transform.position += transform.up * speed * speedFactor * Time.deltaTime;
		lifeTime += Time.deltaTime;

		if (lifeTime > timeoutLifeTime) {
			OnBecameInvisible ();
		}
	}

	void OnBecameInvisible ()
	{
		Destroy (gameObject);
	}
}
