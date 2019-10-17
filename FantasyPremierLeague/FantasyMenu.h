#pragma once
#include <iostream>
#include "Player.h"
#include "Forward.h"
#include "Midfielder.h"
#include "Defender.h"
#include "Goalkeeper.h"
#include "Team.h"
using namespace std;

class FantasyMenu {
public:
	FantasyMenu();

	void displayMenu();
private:
	Player* p;
	bool quit;
};