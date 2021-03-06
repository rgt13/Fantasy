#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "Fantasy.h"
using namespace std;

class Midfielder : public Fantasy {
public:

	Midfielder();
	Midfielder(string name);
	//~Midfielder() { delete this; }

	void scoreGoal();
	void makeAssist();
	void makeKeyPass();
	void winAerial();
	void makeEffectiveClearance();
	void cleanSheet();

	void showPlayerName() { cout << setw(30) << " - " << playerName; }

private:
	double totalScore;
	string playerName;
};
