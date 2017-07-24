using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Door : MonoBehaviour
{
	public Character player;
	public string sceneToLoad = "";
	// Use this for initialization
	void Start ()
	{
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	void OnTriggerStay2D (Collider2D coll)
	{
		if (player.activateButton) {
			if (sceneToLoad != "")
				SceneManager.LoadScene (sceneToLoad);
		}
	}
}
