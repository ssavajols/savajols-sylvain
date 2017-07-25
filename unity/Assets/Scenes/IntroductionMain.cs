using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class IntroductionMain : MonoBehaviour
{

	public GameObject prefab;
	public GameObject[] verticalLines;
	public GameObject[] horizontalLines;
	public float timeLeft = 5f;

	public float speed = 1f;
	public Vector2 distance = new Vector2 (0, -5);

	// Use this for initialization
	void Start ()
	{

		QualitySettings.antiAliasing = 0;


		for (int startFrom = -10; startFrom < 10; startFrom++) {
			var prefab1 = Instantiate (prefab, new Vector3 (startFrom, 0, 0), Quaternion.identity);	
			prefab1.transform.Rotate (new Vector3 (0, 0, 100 + (5 * startFrom)));
			prefab1.transform.localScale = new Vector3 (-0.5f, 1, 1);
		}

		for (int i = 0; i < horizontalLines.Length; i++) {
			var transform = horizontalLines [i].gameObject.transform;
			var y = i;
			transform.position = new Vector2 (-15, -y);
		}

	}
	
	// Update is called once per frame
	void Update ()
	{

		for (int i = 0; i < horizontalLines.Length; i++) {

			this.moveLine (horizontalLines [i].gameObject.transform);

		}

		timeLeft -= Time.deltaTime;

		if (timeLeft < 0f) {
			SceneManager.LoadScene ("character-select");
		}
	}

	void moveLine (Transform transform)
	{

		var Percent = transform.position.y / -5; 

			
		if (transform.position.y < -5) {
			transform.position = new Vector2 (-15, 0);
		}

		transform.Translate (Vector2.down * 0.05f);	
//		transform.Translate(Vector2.down * Time.deltaTime * Mathf.Min(-0.5f, transform.position.y)* -speed);	
//		transform.Translate(0, -0.1f*Percent, 0);	

		transform.localScale = new Vector3 (1, Mathf.Max (0.1f, Percent) + 0.3f, 0);
	}
}
