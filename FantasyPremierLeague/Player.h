#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "Fantasy.h"
#include "Team.h"

using namespace std;

class Player {
public:
	Player() { 
		teamName = "";
		totalFantasyScore = 0;
		team = new Team();
	}

	Player(string name) { 	
		teamName = name; 
		totalFantasyScore = 0;
		team = new Team();
	}

	void showTotalScore();

	void constructTeam() { this->team->createTeam(); }

private:
	double totalFantasyScore;
	string teamName;
	Team* team;
};