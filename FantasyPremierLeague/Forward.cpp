#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "Fantasy.h"
#include "Forward.h"
using namespace std;

Forward::Forward()
{
	totalScore = 0;
	playerName = "";
}

Forward::Forward(string name)
{
	totalScore = 0;
	playerName = name;
}

void Forward::scoreGoal()
{
	cout << playerName << " has scored a goal!" << endl;
	totalScore += 9;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Forward::makeAssist()
{
	cout << playerName << " has made an assist!" << endl;
	totalScore += 6;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Forward::makeKeyPass()
{
	cout << playerName << " has made a key pass." << endl;
	totalScore += 2;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Forward::winAerial()
{
	cout << playerName << " has won the header battle." << endl;
	totalScore += 0.5;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Forward::makeEffectiveClearance()
{
	cout << playerName << " has cleared the ball away from danger." << endl;
	totalScore += 0;
	cout << playerName << "'s total score is -> " << totalScore << endl << endl;
}

void Forward::cleanSheet()
{
}

