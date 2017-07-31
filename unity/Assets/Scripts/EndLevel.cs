using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.SceneManagement;

public class EndLevel : MonoBehaviour
{

	public string sceneToLoad = "";
	public bool play = false;
	public float currentTime = 0;
	public GameObject continueLabel;

	PlayableDirector director;

	// Use this for initialization
	void Start ()
	{
		director = GetComponent<PlayableDirector> ();
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (play && director.time < director.duration) {
			director.time = director.time + Time.deltaTime;
			director.Evaluate ();
		} else if (play) {
			director.Pause ();
			play = false;
		}

		if (director.time > director.duration) {

			if (continueLabel != null) {
				continueLabel.GetComponentInChildren<BlinkRenderer> ().setBlinking (true, -1);
			}

			if (sceneToLoad != "" && Input.GetKey ("return")) {
				SceneManager.LoadScene (sceneToLoad);
			}
		}

	}

	void OnTriggerEnter2D (Collider2D coll)
	{
		if (coll.gameObject.tag == "Player") {
			play = true;
			Destroy (coll.gameObject);
		}
	}
}
