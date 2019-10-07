#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "Fantasy.h"
#include "Forward.h"
#include "Midfielder.h"
#include "Defender.h"
#include "Goalkeeper.h"

using namespace std;

int main()
{
	Forward sadioMane("Sadio Mane");
	Midfielder christianEriksen("Christian Eriksen");
	Defender fabianSchar("Fabian Schar");
	Goalkeeper kasperSchmeichel("Kasper Schmeichel");

	sadioMane.scoreGoal();
	christianEriksen.makeAssist();
	fabianSchar.makeEffectiveClearance();
	kasperSchmeichel.cleanSheet();

	return 0;
}