using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerGenerator : MonoBehaviour
{

	public GameObject[] generators;


	void Update ()
	{
		if (CameraEdgeDetect.isVisibleByMainCamera (gameObject)) {
			for (var i = 0; i < generators.Length; i++) {
				generators [i].GetComponent<PrefabGenerator> ().Restart ();
			}
			Destroy (gameObject);
		}
	}

}
