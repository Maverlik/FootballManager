#pragma once
#include <iostream>
#include "Game.h"
#include "Stats.h"
#include "Exit.h"

using namespace std;

class MainMenu
{
public:
	short answer;

	void PrintMenu();

	void MainInteraction();
};