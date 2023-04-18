#include "Game.h"

void Game::GameMenu() {
	system("cls");
	cout << " | ------------GAME MENU------------ | " << endl;
	cout << " |                                   | " << endl;
	cout << " | ------------NEW GAME - 1--------- | " << endl;
	cout << " | ------------SAVES - 2------------ | " << endl;
	cout << " | ------------EXIT - 3------------- | " << endl;
	cout << " | --------------------------------- | " << endl;
	GameInteraction();
};

void Game::GameInteraction() {
	cin >> answer;
	if (answer == 1) {
		NewGame newgame{};
		newgame.NewSave();
	}
	else if (answer == 2) {
		Saves saves{};
		saves.PrintSaves();
	}
	else if (answer == 3) {
		MainMenu mainmenu{};
		mainmenu.PrintMenu();
	}
	else {
		cout << "Oops! Type 1, 2 or 3" << endl;
		GameInteraction();
	}
}
