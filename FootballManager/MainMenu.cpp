#include "MainMenu.h"
#include "Game.h"
#include "Stats.h"
#include "Exit.h"

void MainMenu::PrintMenu() {
	system("cls");
	cout << " | ------------MAIN MENU------------ | " << endl;
	cout << " |                                   | " << endl;
	cout << " | ------------PLAY - 1------------- | " << endl;
	cout << " | ------------STATS - 2------------ | " << endl;
	cout << " | ------------EXIT - 3------------- | " << endl;
	cout << " | --------------------------------- | " << endl;
	MainInteraction();
}

void MainMenu::MainInteraction() {
	cin >> answer;
	if (answer == 1) {
		Game game{};
		game.GameMenu();
		cout << "Oops! Type 1, 2 or 3" << endl;
	}
	else if (answer == 2) {
		Stats stats{};
		stats.PrintStats();
		cout << "Oops! Type 1, 2 or 3" << endl;
	}
	else if (answer == 3) {
		Exit exit{};
		exit.StartExit();
		cout << "Oops! Type 1, 2 or 3" << endl;
	}
	else {
		cout << "Oops! Type 1, 2 or 3" << endl;
		MainInteraction();
	}
}