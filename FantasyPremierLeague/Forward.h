#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "Fantasy.h"
using namespace std;

class Forward : public Fantasy {
public:

	Forward();
	Forward(string name);
	//~Forward() { delete this; }

	void scoreGoal();
	void makeAssist();
	void makeKeyPass();
	void winAerial();
	void makeEffectiveClearance();
	void cleanSheet();

	void showPlayerName() { cout << setw(60) << " - " << playerName; }

private:
	double totalScore;
	string playerName;
};
