#include "Defender.h"

Defender::Defender()
{
	totalScore = 0;
	playerName = "";
}

Defender::Defender(string name)
{
	totalScore = 0;
	playerName = name;
}

void Defender::scoreGoal()
{
	cout << playerName << " has scored a goal!" << endl;
	totalScore += 10;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Defender::makeAssist()
{
	cout << playerName << " has assisted the striker!" << endl;
	totalScore += 8;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Defender::makeKeyPass()
{
	cout << playerName << " has played an intricate pass!" << endl;
	totalScore += 2;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Defender::winAerial()
{
	cout << playerName << " has beaten the aerial threat!" << endl;
	totalScore += 1;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Defender::makeEffectiveClearance()
{
	cout << playerName << " has dissolved the threat!" << endl;
	totalScore += 0.25;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Defender::cleanSheet()
{
	cout << playerName << " has kept a clean sheet!" << endl;
	totalScore += 6;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}
