using UnityEngine;

public class Calc
{

	public static Quaternion lookAt2D (GameObject obj1, GameObject obj2)
	{
		Quaternion q;
		var diff = obj1.transform.position - obj2.transform.position;

		diff.Normalize ();

		var Z = Mathf.Atan2 (diff.y, diff.x) * Mathf.Rad2Deg;
		q = Quaternion.Euler (obj2.transform.rotation.x, obj2.transform.rotation.y, Z - 90);

		return q;
	}

}
