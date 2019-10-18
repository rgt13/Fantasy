#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "Fantasy.h"
#include "Team.h"
//#include "FantasyMenu.h"

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

		cout << "Your team name is '" << teamName << "'\n\n";
	}

	void showTotalScore();

	void createTeam()   { this->team->createTeam(); this->isTeamCreated = true; }
	void populateTeam() { this->team->populateTeam(); }
	void displayTeam()  { this->team->displayTeam(); }

	int getNumForwards()		{ return this->team->getNumForwards(); }
	int getNumMids()			{ return this->team->getNumMids(); }
	int getNumDefenders()		{ return this->team->getNumDefenders(); }
	int getNumGoalkeepers()		{ return this->team->getNumGoalkeepers(); }

	bool getIsTeamCreated()		{ return this->isTeamCreated; }

	bool isEmpty() {
		if (this->getNumForwards() == 0 && 
			this->getNumMids() == 0 && 
			this->getNumDefenders() == 0 && 
			this->getNumGoalkeepers() == 0) {
			return true;
		}
		else {
			return false;
		}
	}


private:
	double totalFantasyScore;
	string teamName;
	Team* team;
	bool isTeamCreated;
};