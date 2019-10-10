#include "Team.h"


Team::Team() {
	this->numForwards = 0;
	this->numMids = 0;
	this->numDefenders = 0;
	this->numGoalkeepers = 0;
}

Team::Team(string name, int d, int m, int f, int g) {
	this->numForwards = f;
	this->numMids = m;
	this->numDefenders = d;
	this->numGoalkeepers = g;

	this->teamName = name;
}

void Team::createTeam()
{
	int numDefs, numMid, numFors;

	cout << "Enter the amount of desired defenders and press enter ->  ";
	cin >> numDefs;
	
	cout << "\nEnter the amount of desired midfielders and press enter ->  ";
	cin >> numMid;

	cout << "\nEnter the amount of desired forwards and press enter ->  ";
	cin >> numFors;
	cout << endl;

	this->setNumForwards(numFors);
	this->setNumMidfielders(numMid);
	this->setNumDefenders(numDefs);
	this->setNumGoalkeepers(2);
}

void Team::populateTeam()
{
	int numForwardsLeft = this->getNumForwards();
	int numMidsLeft = this->getNumMids();
	int numDefendersLeft = this->getNumDefenders();
	int numGoalkeepersLeft = this->getNumGoalkeepers();

	string chosenDefenders;
	string chosenMids;
	string chosenForwards;
	string chosenGoalkeepers;

	this->setDefenders(numDefendersLeft, chosenDefenders);

	this->setMidfielders(numMidsLeft, chosenMids);

	this->setForwards(numForwardsLeft, chosenForwards);

	this->setGoalkeepers(numGoalkeepersLeft, chosenGoalkeepers);
}

void Team::displayTeam()
{
	if (isEmpty()) 
	{ 
		cout << "Your team is empty\n\n"; 
	}

	else 
	{
		cout << "Here are your defenders: \n";

		int i;

		for (i = 0; i < this->defenders.size(); i++) {
			this->defenders[i].showPlayerName();
		}

		cout << "\nHere are your midfielders: \n\n";

		for (i = 0; i < this->midfielders.size(); i++) {
			this->midfielders[i].showPlayerName();
		}

		cout << "\nHere are your midfielders: \n\n";

		for (i = 0; i < this->forwards.size(); i++) {
			this->forwards[i].showPlayerName();
		}

		cout << "\nHere are your goalkeepers: \n\n";

		for (i = 0; i < this->goalkeepers.size(); i++) {
			this->goalkeepers[i].showPlayerName();
		}
	}
}

void Team::setNumForwards(int num)
{
	this->numForwards = num;
}

void Team::setNumMidfielders(int num)
{
	this->numMids = num;
}

void Team::setNumDefenders(int num)
{
	this->numDefenders = num;
}

void Team::setNumGoalkeepers(int num)
{
	this->numGoalkeepers = num;
}

void Team::setForwards(int numForwardsLeft, string chosenForwards)
{
	cout << "Select the forwards for your squad and press enter: ";
	for (int i = 0; i < numForwardsLeft; i++) {
		getline(cin, chosenForwards);
		Forward f(chosenForwards);
		this->forwards.push_back(f);
	}
}

void Team::setMidfielders(int numMidsLeft, string chosenMids)
{
	cout << "Select the midfielders for your squad and press enter: ";
	for(int i = 0; i < numMidsLeft; i++) {
		int midIndex = 0;
		getline(cin, chosenMids);
		Midfielder m(chosenMids);
		this->midfielders.push_back(m);
	}
}

void Team::setDefenders(int numDefendersLeft, string chosenDefenders)
{
	cout << "Select the defenders for your squad and press enter: ";
	for(int i = 0; i < numDefendersLeft+1; i++) {
		getline(cin, chosenDefenders, '\n');
		Defender d(chosenDefenders);
		this->defenders.push_back(d);
	}
}

void Team::setGoalkeepers(int numGoalkeepersLeft, string chosenGoalkeepers)
{
	cout << "Select the goalkeepers for your squad and press enter: ";
	for(int i = 0; i < 2; i++) {
		getline(cin, chosenGoalkeepers);
		Goalkeeper g(chosenGoalkeepers);
		this->goalkeepers.push_back(g);
	}
}
