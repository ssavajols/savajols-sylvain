﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoAheadIA : MonoBehaviour
{
	

	public float speed = 1;

	// Update is called once per frame
	void Update ()
	{
		transform.position += transform.up * Time.deltaTime * speed;
	}
}
