using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseCamera : MonoBehaviour
{

	public bool isActive = true;

	// Use this for initialization
	protected void Start ()
	{
		
	}
	
	// Update is called once per frame
	protected void Update ()
	{
		
	}

	// Update is called once per frame
	protected void FixedUpdate ()
	{

	}
		
	// Update is called once per frame
	protected void LateUpdate ()
	{
		if (!isActive) {
			return;
		}

		transform.position = calcPosition ();
	}

	protected Vector3 calcPosition ()
	{
		return transform.position;
	}
}
