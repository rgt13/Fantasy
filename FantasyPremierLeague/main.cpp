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
//#include "FantasyMenu.h"

using namespace std;

int main()
{
	//Player p("FekirWrightInDebuchy");
	
	Forward sadioMane("Sadio Mane");

	sadioMane.scoreGoal();
	sadioMane.makeSuccessfulDribble();



	return 0;
}