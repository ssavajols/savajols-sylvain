using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;


[CustomEditor (typeof(WaypointBuilderScript))]
public class WaypointBuilderEditor : Editor
{

	new public void OnInspectorGUI ()
	{
		DrawDefaultInspector ();

		WaypointBuilderScript myScript = (WaypointBuilderScript)target;

		if (GUILayout.Button ("Add a waypoint")) {
			myScript.BuildObject ();
		}
	}
}
