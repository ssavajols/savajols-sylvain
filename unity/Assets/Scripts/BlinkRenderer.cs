using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlinkRenderer : MonoBehaviour
{

	Renderer rd;

	bool canBlink = true;

	float currentTime;
	float duration;

	public bool isBlinking = false;
	public float blinkSpeed = 0.1f;

	// Use this for initialization
	void Start ()
	{
		rd = gameObject.GetComponent<Renderer> ();
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (isBlinking) {
			currentTime += Time.deltaTime;
			if (canBlink) {
				StartCoroutine (blinking ());		
				if (currentTime > duration) {
					setBlinking (false);
				}	
			}
		}
			

			
	}

	public void setBlinking (bool blinking, float d = 3F)
	{
		if (blinking) {
			isBlinking = true;
			currentTime = 0;
			duration = d;
		} else {
			isBlinking = false;
		}
	}

	IEnumerator blinking ()
	{
		rd.enabled = !rd.enabled;
		canBlink = false;
		yield return new WaitForSeconds (blinkSpeed);
		rd.enabled = !rd.enabled;
		yield return new WaitForSeconds (blinkSpeed);
		canBlink = true;
	}
}
