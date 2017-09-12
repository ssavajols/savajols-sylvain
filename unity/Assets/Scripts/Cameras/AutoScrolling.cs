using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoScrolling : MonoBehaviour
{

	public Vector3 speed = new Vector3 (0, 0.005F, 0);

	// Use this for initialization
	void Start ()
	{
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		gameObject.transform.position += speed;
	}
}
