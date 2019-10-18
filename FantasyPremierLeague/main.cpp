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
<<<<<<< HEAD
//#include "FantasyMenu.h"
=======
#include "FantasyMenu.h"
>>>>>>> b4ea1039345b61c645280bad10f0e3c83319ceed

using namespace std;

int main()
{
<<<<<<< HEAD
	//Player p("FekirWrightInDebuchy");
	
	Forward sadioMane("Sadio Mane");

	sadioMane.scoreGoal();
	sadioMane.makeSuccessfulDribble();


=======
	FantasyMenu * menu = new FantasyMenu();

	menu->displayMenu();
>>>>>>> b4ea1039345b61c645280bad10f0e3c83319ceed

	return 0;
}