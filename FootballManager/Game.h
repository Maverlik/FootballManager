#pragma once
#include <iostream>
#include <fstream>
#include "MainMenu.h"
#include "Saves.h"
#include "NewGame.h"

using namespace std;

class Game {
public:
	short answer;

	void GameMenu();

	void GameInteraction();
};

