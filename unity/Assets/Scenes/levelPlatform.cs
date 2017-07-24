using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class levelPlatform : MonoBehaviour
{

	public GameObject player;

	// Use this for initialization
	void Start ()
	{
		Debug.Log (GlobalData.h);
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (player.transform.position.y < -5) {
			endGame ();
		}
	}

	void endGame ()
	{
		
		SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
	}
}
