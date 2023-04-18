#include "Game.h"
#include "MainMenu.h"

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
		cout << "Oops!" << endl;
	}
	else if (answer == 2) {
		cout << "Oops!" << endl;
	}
	else if (answer == 3) {
		cout << "Oops!" << endl;
		MainMenu mainmenu{};
		mainmenu.PrintMenu();
	}
	else {
		cout << "Oops! Type 1, 2 or 3" << endl;
		GameInteraction();
	}
}
