using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaypointBuilderScript : MonoBehaviour
{

	public Color color = new Color (0, 255, 0, 0.5F);
	public List<Transform> wayPoints = new List<Transform> ();

	public void OnDrawGizmos ()
	{

		wayPoints.Clear ();
		Start ();

		var last = 0;
		for (var i = 0; i < wayPoints.Count; i++) {
			var next = i;
			Gizmos.color = color;
			Gizmos.DrawCube (wayPoints [i].position, new Vector3 (0.1F, 0.1F, 1F));	


			if (last != next) {
				Gizmos.DrawLine (wayPoints [last].position, wayPoints [next].position);
			} 

			last = next;

			if (next == wayPoints.Count - 1) {
				Gizmos.DrawLine (wayPoints [next].position, wayPoints [0].position);
			}
		}

	}

	public void BuildObject ()
	{
		var go = new GameObject ();
		go.transform.SetParent (this.gameObject.transform);
		go.AddComponent<BoxCollider2D> ();
		go.GetComponent<BoxCollider2D> ().isTrigger = true;
		go.GetComponent<BoxCollider2D> ().size = new Vector2 (0.1F, 0.1F);
		wayPoints.Add (go.transform);
	}

	// Use this for initialization
	void Start ()
	{
		var wp = GetComponentsInChildren<Transform> ();

		for (var i = 0; i < wp.Length; i++) {
			if (wp [i] != gameObject.transform) {
				wayPoints.Add (wp [i]);	
			}
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}
}
