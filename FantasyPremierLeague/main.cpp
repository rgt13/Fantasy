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

using namespace std;

int main()
{
	Team* team = new Team();		// Create empty team

	team = team->createTeam();

	team->populateTeam();

	team->displayTeam();

	cout << team->isEmpty();

	Forward sadioMane("Sadio Mane");
	Midfielder christianEriksen("Christian Eriksen");
	Defender fabianSchar("Fabian Schar");
	Goalkeeper kasperSchmeichel("Kasper Schmeichel");

	/*
	sadioMane.scoreGoal();
	christianEriksen.makeAssist();
	fabianSchar.makeEffectiveClearance();
	kasperSchmeichel.cleanSheet();
	*/

	return 0;
}