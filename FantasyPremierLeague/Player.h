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
		isTeamCreated = false;
	}

	Player(string name) { 	
		teamName = name; 
		totalFantasyScore = 0;
		team = new Team();

		cout << "Your team name is '" << teamName << "'\n\n";

		isTeamCreated = false;
	}

	//~Player() { delete this; }

	void showTotalScore();

	void createTeam()   { this->team->createTeam(); isTeamCreated = true; }
	void populateTeam() { this->team->populateTeam(); }
	void displayTeam()  { this->team->displayTeam(); }

	int getNumForwards()		{ return this->team->getNumForwards(); }
	int getNumMids()			{ return this->team->getNumMids(); }
	int getNumDefenders()		{ return this->team->getNumDefenders(); }
	int getNumGoalkeepers()		{ return this->team->getNumGoalkeepers(); }

	void setForwards(int numForwardsLeft, string chosenForwards) 
	{ 
		this->team->setForwards(numForwardsLeft, chosenForwards); 
	}

	void setMidfielders(int numMidsLeft, string chosenMids)					
	{
		this->team->setMidfielders(numMidsLeft, chosenMids); 
	}

	void setDefenders(int numDefendersLeft, string chosenDefenders)
	{
		this->team->setDefenders(numDefendersLeft, chosenDefenders);
	}

	void setGoalkeepers(int numGoalkeepersLeft, string chosenGoalkeepers)
	{
		this->team->setGoalkeepers(numGoalkeepersLeft, chosenGoalkeepers);
	}



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