using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabGenerator : MonoBehaviour
{

	int next = 0;
	bool isPlaying = false;
	int generated = 0;
	float currentTime = 0;

	public GameObject parent;
	public GameObject[] prefabs;
	public float frequency = 0.1F;
	public bool playOnAwake = true;
	public bool randomPrefabs = false;
	public int numberToGenerate = 10;

	void OnDrawGizmos ()
	{
		Gizmos.color = new Color (0, 0, 255, 0.5f);
		Gizmos.DrawCube (gameObject.transform.position, new Vector3 (0.15f, 0.15f, 1));
	}

	// Use this for initialization
	void Start ()
	{
		if (playOnAwake) {
			Play ();
		}
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (generated < numberToGenerate && isPlaying) {

			if (currentTime > frequency) {
				createPrefab (getNextPrefab ());
			}
		}
		currentTime += Time.deltaTime;
	}

	void createPrefab (GameObject prefab)
	{
		GameObject gameToInstantiate = gameObject;
		if (parent != null) {
			gameToInstantiate = parent;
		}

		GameObject go = Instantiate (prefab);
		go.transform.position = transform.position;
		go.transform.localRotation = transform.rotation;
		go.transform.parent = gameToInstantiate.transform;
		generated++;
		currentTime = 0;
	}

	public void Reset ()
	{
		next = 0;
		generated = 0;
		currentTime = 0;
	}

	public void Play ()
	{
		isPlaying = true;
	}

	public void Pause ()
	{
		isPlaying = false;
	}

	public void Restart ()
	{
		Reset ();
		Play ();
	}

	public void Stop ()
	{
		Reset ();
		Pause ();
	}

	GameObject getNextPrefab ()
	{

		if (randomPrefabs) {
			next = Random.Range (0, prefabs.Length);
		} else {		
			next++;
			if (next > prefabs.Length - 1) {
				next = 0;
			}
		}
		return prefabs [next];
	}

}
