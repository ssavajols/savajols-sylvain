using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoDestroyAfterAnimationEnd : MonoBehaviour
{

	public string animationToPlay = "";
	// Use this for initialization
	void Start ()
	{
		if (animationToPlay != "") {
			GetComponent<Animator> ().Play (animationToPlay);
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	void AnimationEnd ()
	{
		Destroy (gameObject);
	}
}
