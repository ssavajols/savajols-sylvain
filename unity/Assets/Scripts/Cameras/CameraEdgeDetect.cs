using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraEdgeDetect : MonoBehaviour
{

	public Color color = new Color (255, 0, 0, 0.3F);

	public void onDrawGizmosSelected ()
	{
		color.a = 1;
		screenEdges (color);
	}

	public void OnDrawGizmos ()
	{
		color.a = 0.3F;
		screenEdges (color);
	}

	void screenEdges (Color color)
	{
		Gizmos.color = color;
		Gizmos.DrawWireCube (
			new Vector3 (
				Camera.main.transform.position.x,
				Camera.main.transform.position.y,
				gameObject.transform.position.z), 
			new Vector3 (
				Camera.main.orthographicSize * 2,
				Camera.main.orthographicSize * 2,
				Camera.main.orthographicSize * 2));
	}

	static public float getCameraEdge (string direction)
	{
		switch (direction) {
		case "LEFT":
			return (Camera.main.transform.position.x - Camera.main.orthographicSize);
		case "RIGHT":
			return (Camera.main.transform.position.x + Camera.main.orthographicSize);
		case "UP":
			return (Camera.main.transform.position.y + Camera.main.orthographicSize);
		case "DOWN":
			return (Camera.main.transform.position.y - Camera.main.orthographicSize);
		default:
			return 0;
		}
	}

	static public bool isVisibleByMainCamera (GameObject go)
	{
		bool isVisible = false;

		if (
			go.transform.position.x > getCameraEdge ("LEFT") &&
			go.transform.position.x < getCameraEdge ("RIGHT") &&
			go.transform.position.y > getCameraEdge ("DOWN") &&
			go.transform.position.y < getCameraEdge ("UP")) {
			isVisible = true;
		}

		return isVisible;
	}
}
