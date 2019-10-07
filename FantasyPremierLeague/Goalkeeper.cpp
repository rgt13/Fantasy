#include "Goalkeeper.h"

Goalkeeper::Goalkeeper()
{
	totalScore = 0;
	playerName = "";
}

Goalkeeper::Goalkeeper(string name)
{
	totalScore = 0;
	playerName = name;
}

void Goalkeeper::scoreGoal()
{
}

void Goalkeeper::makeAssist()
{
}

void Goalkeeper::makeKeyPass()
{
	cout << playerName << " has played an intricate pass!" << endl;
	totalScore += 6;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Goalkeeper::winAerial()
{
	cout << playerName << " has beaten the aerial threat!" << endl;
	totalScore += 1;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Goalkeeper::makeEffectiveClearance()
{
	cout << playerName << " has cleared the ball!" << endl;
	totalScore += 0.25;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Goalkeeper::cleanSheet()
{
	cout << playerName << " has kept a clean sheet!" << endl;
	totalScore += 8;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}
