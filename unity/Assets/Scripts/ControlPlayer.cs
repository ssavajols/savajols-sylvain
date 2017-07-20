using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlPlayer : MonoBehaviour
{

	CharacterRecruter1 p;
	public GameObject player;

	// Use this for initialization
	void Start ()
	{
		p = (CharacterRecruter1)player.GetComponent (typeof(CharacterRecruter1));
	}

	protected void Update ()
	{
		if (Input.GetKey ("right")) {
			p.goRight (Input.GetKey ("left shift") || Input.GetKey ("right shift"));
		}

		if (Input.GetKey ("left")) {
			p.goLeft (Input.GetKey ("left shift") || Input.GetKey ("right shift"));
		}

		if (Input.GetKey ("space") || Input.GetKey ("up")) {
			p.jump ();
		}
			
	}
}
