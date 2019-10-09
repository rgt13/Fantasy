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
	Team(int d, int m, int f, int g);
	Team* createTeam();
	void populateTeam();
	void displayTeam();

	int getNumForwards() { return numForwards; }
	int getNumMids() { return numMids; }
	int getNumDefenders() { return numDefenders; }
	int getNumGoalkeepers() { return numGoalkeepers; }

	bool isEmpty() {
		if (this->numForwards == 0 && this->numMids == 0 && this->numDefenders == 0 && this->numGoalkeepers == 0) {
			return true;
		}
		else {
			cout << this->numForwards << endl;
			cout << this->numMids << endl;
			cout << this->numDefenders << endl;
			cout << this->numGoalkeepers << endl;
			return false;
		}
	}
	
private:

	int numForwards;
	int numMids;
	int numDefenders;
	int numGoalkeepers;

	
	Forward * forwards;
	Midfielder * midfielders;
	Defender * defenders;
	Goalkeeper * goalkeepers;
	

	/*
	string * forwards;
	string * midfielders;
	string * defenders;
	string * goalkeepers;
	*/
	
};
