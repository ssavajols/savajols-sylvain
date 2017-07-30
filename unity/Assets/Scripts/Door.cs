using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Door : MonoBehaviour
{
	public Character player;
	public string sceneToLoad = "";
	public string urlToLoad = "";
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
		if (player.inputs.activateButton) {
			if (sceneToLoad != "") {
				SceneManager.LoadScene (sceneToLoad);
			}
				
			if (urlToLoad != "") {
				#if UNITY_WEBGL
				Application.ExternalEval ("window.open('" + urlToLoad + "');");
				#endif

				#if UNITY_EDITOR
				Application.OpenURL (urlToLoad);
				#endif
			}
		}

	}
}
