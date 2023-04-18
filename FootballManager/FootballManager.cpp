#include <iostream>
#include <string>
#include "MainMenu.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	MainMenu menu{};
	menu.PrintMenu();
}