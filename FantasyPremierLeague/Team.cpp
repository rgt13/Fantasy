#include "Team.h"


Team::Team() {
	this->numForwards = 0;
	this->numMids = 0;
	this->numDefenders = 0;
	this->numGoalkeepers = 0;

	this->forwards = new Forward[numForwards];
	this->midfielders = new Midfielder[numMids];
	this->defenders = new Defender[numDefenders];
	this->goalkeepers = new Goalkeeper[numGoalkeepers];
}

Team::Team(string name, int d, int m, int f, int g) {
	this->numForwards = f;
	this->numMids = m;
	this->numDefenders = d;
	this->numGoalkeepers = g;

	this->teamName = name;
	
	this->forwards = new Forward[numForwards];
	this->midfielders = new Midfielder[numMids];
	this->defenders = new Defender[numDefenders];
	this->goalkeepers = new Goalkeeper[numGoalkeepers];
}

Team* Team::createTeam()
{
	int numDefs, numMid, numFors, numGKs;

	cout << "Enter the amount of desired defenders and press enter ->  ";
	cin >> numDefs;
	
	cout << "\nEnter the amount of desired midfielders and press enter ->  ";
	cin >> numMid;

	cout << "\nEnter the amount of desired forwards and press enter ->  ";
	cin >> numFors;
	cout << endl;

	Team* team = new Team(this->getTeamName(), numDefs, numMid, numFors, 2);

	cout << "Your team name is '" << this->teamName << "'\n\n";
	return team;
}

void Team::populateTeam()
{
	cout << "Populating team" << endl << endl;
	int numForwardsLeft = this->getNumForwards();
	int numMidsLeft = this->getNumMids();
	int numDefendersLeft = this->getNumDefenders();
	int numGoalkeepersLeft = this->getNumGoalkeepers();

	cout << "Select the defenders for your squad and press enter: ";
	while (numDefendersLeft >= 0) {
		string chosenDefenders;
		getline(cin, chosenDefenders, '\n'); 
		Defender d(chosenDefenders);
		this->defenders[numDefendersLeft] = d;
		numDefendersLeft--;
	}

	cout << "Select the midfielders for your squad and press enter: ";
	while (numMidsLeft > 0) {
		string chosenMids;
		getline(cin, chosenMids);
		Midfielder m(chosenMids);
		this->midfielders[numMidsLeft-1] = m;
		numMidsLeft--;
	}

	cout << "Select the forwards for your squad and press enter: ";
	while (numForwardsLeft > 0) {
		string chosenForwards;
		getline(cin, chosenForwards);
		Forward f(chosenForwards);
		this->forwards[numForwardsLeft-1] = f;
		numForwardsLeft--;
	}

	cout << "Select the goalkeepers for your squad and press enter: ";
	while (numGoalkeepersLeft > 0) {
		string chosenGoalkeepers;
		getline(cin, chosenGoalkeepers);
		Goalkeeper g(chosenGoalkeepers);
		this->goalkeepers[numGoalkeepersLeft - 1] = g;
		numGoalkeepersLeft--;
	}
}

void Team::displayTeam()
{
	if (isEmpty()) 
	{ 
		cout << "Your team is empty\n\n"; 
	}

	else 
	{
		cout << "Here are your defenders: \n\n";

		int i;

		for (i = this->getNumDefenders() - 1; i >= 0; i--) {
			this->defenders[i].showPlayerName();
		}

		cout << "\nHere are your midfielders: \n\n";

		for (i = this->getNumMids() - 1; i >= 0; i--) {
			this->midfielders[i].showPlayerName();
		}

		cout << "\nHere are your midfielders: \n\n";

		for (i = this->getNumForwards() - 1; i >= 0; i--) {
			this->forwards[i].showPlayerName();
		}

		cout << "\nHere are your goalkeepers: \n\n";

		for (i = 1; i >= 0; i--) {
			this->goalkeepers[i].showPlayerName();
		}
	}
}
