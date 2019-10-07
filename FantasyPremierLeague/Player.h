#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

class Player {
public:
	Player() { 
		teamName = "";
		totalFantasyScore = 0;
	}

	Player(string name) { 	
		teamName = name; 
		totalFantasyScore = 0;
	}

	void showTotalScore();

private:
	double totalFantasyScore;
	string teamName;
};