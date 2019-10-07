#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

class Team {
public:
	Team() {}
	void createTeam();
	void displayAvailableFormations();
	
private:
	vector<string> forwards;
	vector<string> midfielders;
	vector<string> defenders;
	vector<string> goalkeepers;
};
