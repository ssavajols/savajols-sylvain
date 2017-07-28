using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class deathZone : MonoBehaviour
{

	public string sceneToLoad = "";
	public Color color = new Color (255, 0, 0, 1F);

	void OnDrawGizmos ()
	{
		Gizmos.color = color;
		Gizmos.DrawWireCube (gameObject.transform.position, gameObject.transform.localScale);
	}

	void OnTriggerStay2D (Collider2D coll)
	{
		if (coll.gameObject.tag == "Player") {
			var _method = coll.gameObject.GetComponent<Character> ().GetType ().GetMethod ("OnDeathZoneTouch");

			if (_method != null) {
				_method.Invoke (coll.gameObject.GetComponent<Character> (), null);
			} else if (sceneToLoad != "" || sceneToLoad == "current") {
				SceneManager.LoadScene (sceneToLoad);	
			} else {
				SceneManager.LoadScene (SceneManager.GetActiveScene ().name);	
			}

		}
	}

}
