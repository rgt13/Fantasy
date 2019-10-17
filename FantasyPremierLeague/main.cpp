#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "Fantasy.h"
#include "Forward.h"
#include "Midfielder.h"
#include "Defender.h"
#include "Goalkeeper.h"
#include "Team.h"
#include "Player.h"	
#include "FantasyMenu.h"

using namespace std;

int main()
{
	FantasyMenu * menu = new FantasyMenu();

	menu->displayMenu();

	return 0;
}