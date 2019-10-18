#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include "Fantasy.h"
#include "Forward.h"
#include "Midfielder.h"
#include "Defender.h"
#include "Goalkeeper.h"

using namespace std;

class Team {
public:
	Team();
	Team(string name) { this->teamName = name; }
	Team(string name, int d, int m, int f, int g);
	~Team() { delete this; }
	void createTeam();
	void populateTeam();
	void displayTeam();

	int getNumForwards() { return numForwards; }
	int getNumMids() { return numMids; }
	int getNumDefenders() { return numDefenders; }
	int getNumGoalkeepers() { return numGoalkeepers; }

	void setNumForwards(int num);
	void setNumMidfielders(int num);
	void setNumDefenders(int num);
	void setNumGoalkeepers(int num);

	void setForwards(int numForwardsLeft, string chosenForwards);
	void setMidfielders(int numMidsLeft, string chosenMids);
	void setDefenders(int numDefendersLeft, string chosenDefenders);
	void setGoalkeepers(int numGoalkeepersLeft, string chosenGoalkeepers);

	int findMaxSectionSize()
	{
		if (getNumMids() > getNumDefenders()) {
			return this->getNumMids();
		}
		else if (getNumDefenders() > getNumMids()) {
			return this->getNumDefenders();
		}
	}


	string getTeamName() { return teamName; }

	bool isEmpty() {
		if (this->numForwards == 0 && this->numMids == 0 && this->numDefenders == 0 && this->numGoalkeepers == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	
private:

	int numForwards;
	int numMids;
	int numDefenders;
	int numGoalkeepers;

	string teamName;
	
	/*
	Forward * forwards;
	Midfielder * midfielders;
	Defender * defenders;
	Goalkeeper * goalkeepers;
	*/

	
	vector<Forward> forwards;
	vector<Midfielder> midfielders;
	vector<Defender> defenders;
	vector<Goalkeeper> goalkeepers;
	

	/*
	string * forwards;
	string * midfielders;
	string * defenders;
	string * goalkeepers;
	*/
};
