using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fader : MonoBehaviour
{


	public float from = 1;
	public float to = 0;
	public float duration = 1;
	public float delay = 1;
	public bool destroyOnEnd = true;

	float currentTime = 0;

	// Use this for initialization
	void Start ()
	{
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		currentTime += Time.deltaTime;

		if (currentTime > delay) {
			var opacity = 1 * ((currentTime - delay) / duration);

			if (from < to) {
				fadeTo (opacity);
			} else {
				fadeTo (1 - opacity);
			}

		}
			
		if (currentTime - delay > duration && destroyOnEnd) {
			Destroy (gameObject);
		}
	}

	void fadeTo (float opacity)
	{
		GetComponent<Renderer> ().material.color = new Color (255, 255, 255, opacity);			
	}
}
