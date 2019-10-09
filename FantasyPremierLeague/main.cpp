#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "Fantasy.h"
#include "Forward.h"
#include "Midfielder.h"
#include "Defender.h"
#include "Goalkeeper.h"
#include "Team.h";
#include "Player.h"	

using namespace std;

int main()
{
	
	Team* team = new Team("FekirWrightInDebuchy");		// Create empty team

	team = team->createTeam();

	team->populateTeam();

	team->displayTeam();
	
	return 0;
}