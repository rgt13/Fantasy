#include "Midfielder.h"

Midfielder::Midfielder()
{
	totalScore = 0;
	playerName = "";
}

Midfielder::Midfielder(string name)
{
	totalScore = 0;
	playerName = name;
}

void Midfielder::scoreGoal()
{
	cout << playerName << " has scored a goal!" << endl;
	totalScore += 9;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Midfielder::makeAssist()
{
	cout << playerName << " has assisted a goal!" << endl;
	totalScore += 6;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Midfielder::makeKeyPass()
{
	cout << playerName << " has threaded the ball through!" << endl;
	totalScore += 2;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Midfielder::winAerial()
{
	cout << playerName << " has won the aerial battle!" << endl;
	totalScore += 0.5;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Midfielder::makeEffectiveClearance()
{
	cout << playerName << " has dissolved the attacking threat!" << endl;
	totalScore += 0;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Midfielder::cleanSheet()
{
	cout << playerName << " has kept a clean sheet!" << endl;
	totalScore += 1;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}
