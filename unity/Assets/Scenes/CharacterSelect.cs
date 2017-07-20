using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CharacterSelect : MonoBehaviour
{

	public GameObject[] characters;
	public GameObject cursor;
	public int playerSelected = 0;
	public string type = CharacterType.hero;

	private CoolDown cool = new CoolDown (0, 0.25F);

	// Use this for initialization
	void Start ()
	{
		playerSelect ();
	}
	
	// Update is called once per frame
	void Update ()
	{

		cool.Update ();

		var to = playerSelected;


		if (Input.GetKey ("right")) {
			to = selectNext ();
		}

		if (Input.GetKey ("left")) {
			to = selectPrevious ();
		}

		if (Input.GetKey ("space") || Input.GetKey ("return")) {
			SceneManager.LoadScene ("level-platform-1");
		}
			
			
		if (to != playerSelected) {

			playerSelected = to;
			playerSelect ();
		}

	}

	void playerSelect ()
	{
		cursor.transform.position = new Vector2 (characters [playerSelected].transform.position.x, -4);

		for (var i = 0; i < characters.Length; i++) {
			characters [i].GetComponent<Animator> ().Play (AnimationsNameModel.stand);	
		}

		characters [playerSelected].GetComponent<Animator> ().Play (AnimationsNameModel.walk);
	}

	int selectPrevious ()
	{
		if (!cool.isCool) {
			return playerSelected;
		}

		var to = playerSelected - 1;


		if (to < 0) {
			to = characters.Length - 1;
		}

		cool.prevent ();

		return to;
	}

	int selectNext ()
	{
		
		if (!cool.isCool) {
			return playerSelected;
		}

		cool.prevent ();

		var to = playerSelected + 1;


		if (to > characters.Length - 1) {
			to = 0;
		}

		return to;
	}

}
