#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "Fantasy.h"
using namespace std;

class Goalkeeper : public Fantasy {
public:

	Goalkeeper();
	Goalkeeper(string name);

	void scoreGoal();
	void makeAssist();
	void makeKeyPass();
	void winAerial();
	void makeEffectiveClearance();
	void cleanSheet();

private:
	double totalScore;
	string playerName;
};
