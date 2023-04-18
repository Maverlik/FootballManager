#include "Saves.h"

void Saves::PrintSaves()
{
	system("cls");
	cout << " | SAVE 1 | " << endl;
	cout << " | SAVE 2 | " << endl;
	cout << " | SAVE 3 | " << endl;
	cout << " | SAVE 4 | " << endl;
	cout << " | SAVE 5 | " << endl;
	SavesInteraction();
}

void Saves::SavesInteraction() {
	cin >> answer;
	if (answer == 1) {
		cout << "New game" << endl;
	}
	else if (answer == 2) {
		cout << "Saves" << endl;
	}
	else if (answer == 3) {
		Game game{};
		game.GameMenu();
	}
	else {
		cout << "Oops! Type 1, 2 or 3" << endl;
		SavesInteraction();
	}
}
