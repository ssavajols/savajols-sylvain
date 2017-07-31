using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlinkRenderer : MonoBehaviour
{

	Renderer rd;
	Canvas crd;

	bool canBlink = true;

	float currentTime;

	public bool infinite = false;
	public bool isBlinking = false;
	public float blinkSpeed = 0.1f;
	public float duration;


	// Use this for initialization
	void Start ()
	{
		rd = gameObject.GetComponent<Renderer> ();

		if (rd == null) {
			crd = gameObject.GetComponent<Canvas> ();	
		}

		if (isBlinking) {
			setBlinking (true, duration);
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (isBlinking) {
			currentTime += Time.deltaTime;
			if (canBlink) {
				StartCoroutine (blinking ());		
				if (currentTime > duration && !infinite) {
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
		if (rd != null) {
			rd.enabled = !rd.enabled;
		}
			
		if (crd != null) {
			crd.enabled = !crd.enabled;
		}
				
		canBlink = false;
		yield return new WaitForSeconds (blinkSpeed);

		if (rd != null) {
			rd.enabled = !rd.enabled;
		}

		if (crd != null) {
			crd.enabled = !crd.enabled;
		}

		yield return new WaitForSeconds (blinkSpeed);
		canBlink = true;
	}
}
