#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "Fantasy.h"
using namespace std;

class Defender : public Fantasy {

	friend ostream& operator<< (ostream& os, const Defender& d)
	{

	}

public:

	Defender();
	Defender(string name);
	//~Defender() { delete this->totalScore; }

	void scoreGoal();
	void makeAssist();
	void makeKeyPass();
	void winAerial();
	void makeEffectiveClearance();
	void cleanSheet();

	void showPlayerName() { cout << " - " << playerName; }

private:
	double totalScore;
	string playerName;
};
