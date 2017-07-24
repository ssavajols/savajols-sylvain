using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerAnimationOnContact : MonoBehaviour
{


	public string triggeredByTag = "";
	public string animationEnter;
	public string animationExit;
	public bool triggerOnce = true;
	public GameObject objectToAnimate;

	Animator anims;
	bool triggered = false;

	// Use this for initialization
	void Start ()
	{
		if (objectToAnimate == null) {
			anims = GetComponent<Animator> ();	
		} else {
			anims = objectToAnimate.GetComponent<Animator> ();	
		}


		anims.Play ("idle");
	}

	void OnTriggerEnter2D (Collider2D coll)
	{

		if (triggered || animationEnter == "") {
			return;
		}
			

		var canPlay = true;

		if (triggeredByTag != "" && coll.gameObject.tag == triggeredByTag) {
			canPlay = true;
		} else if (triggeredByTag != "" && coll.gameObject.tag != triggeredByTag) {
			canPlay = false;	
		}

		if (canPlay) {
			anims.Play (animationEnter);

			if (triggerOnce) {
				triggered = true;
			}	
		}

	}

	void OnTriggerExit2D (Collider2D coll)
	{
		if (triggered || animationExit == "") {
			return;
		}
			

		var canPlay = true;

		if (triggeredByTag != "" && coll.gameObject.tag == triggeredByTag) {
			canPlay = true;
		} else if (triggeredByTag != "" && coll.gameObject.tag != triggeredByTag) {
			canPlay = false;	
		}

		if (canPlay) {
			anims.Play (animationExit);

			if (triggerOnce) {
				triggered = true;
			}	
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}
}
