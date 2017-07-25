using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterSounds : MonoBehaviour
{

	public AudioClip footstepClip;
	public AudioClip jumpClip;
	public AudioClip fallClip;

	AudioSource footstep;
	AudioSource jump;
	AudioSource fall;

	// Use this for initialization
	void Start ()
	{

		footstep = gameObject.AddComponent<AudioSource> ();
		footstep.clip = footstepClip;
		footstep.volume = 0.5F;

		jump = gameObject.AddComponent<AudioSource> ();
		jump.clip = jumpClip;
		jump.volume = 0.5F;

		fall = gameObject.AddComponent<AudioSource> ();
		fall.clip = fallClip;
		fall.volume = 0.5F;
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	public void playFall ()
	{
		fall.Play ();
	}

	public void playJump ()
	{
		jump.Play ();
	}

	public void playFootStep ()
	{
		footstep.Play ();
	}
}
