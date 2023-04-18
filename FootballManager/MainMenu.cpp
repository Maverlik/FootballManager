#include "MainMenu.h"

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
	}
	else if (answer == 2) {
		Stats stats{};
		stats.PrintStats();
	}
	else if (answer == 3) {
		system("cls");
		Exit exit{};
		exit.StartExit();
	}
	else {
		cout << "Oops! Type 1, 2 or 3" << endl;
		MainInteraction();
	}
}