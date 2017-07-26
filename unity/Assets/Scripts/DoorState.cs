using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorState : MonoBehaviour
{

	public string sceneToLoad = "";
	// Use this for initialization
	void Start ()
	{
		GetComponent<Animator> ().Play ("close");
	}

	void OnTriggerStay2D (Collider2D coll)
	{
		if (coll.gameObject.tag == "Player") {
			GetComponent<Animator> ().Play ("open");
		}

	}

	void OnTriggerExit2D ()
	{
		GetComponent<Animator> ().Play ("close");
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}
}
