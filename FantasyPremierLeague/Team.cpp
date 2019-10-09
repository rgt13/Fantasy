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

	/*
	forwards = new string[numForwards];
	midfielders = new string[numMids];
	defenders = new string[numDefenders];
	goalkeepers = new string[numGoalkeepers];
	*/
}

Team::Team(int d, int m, int f, int g) {
	this->numForwards = f;
	this->numMids = m;
	this->numDefenders = d;
	this->numGoalkeepers = g;

	
	this->forwards = new Forward[numForwards];
	this->midfielders = new Midfielder[numMids];
	this->defenders = new Defender[numDefenders];
	this->goalkeepers = new Goalkeeper[numGoalkeepers];
	

	/*
	forwards = new string[numForwards];
	midfielders = new string[numMids];
	defenders = new string[numDefenders];
	goalkeepers = new string[numGoalkeepers];
	*/
	
}

Team* Team::createTeam()
{
	cout << "Enter the amount of desired defenders and press enter ->  ";
	cin >> numDefenders;
	
	cout << "\nEnter the amount of desired midfielders and press enter ->  ";
	cin >> numMids;

	cout << "\nEnter the amount of desired forwards and press enter ->  ";
	cin >> numForwards;
	cout << endl;

	Team* team = new Team(numDefenders, numMids, numForwards, 2);
	cout << team->getNumDefenders() << " - " << numMids << " - " << numForwards << endl;

	return team;
}

void Team::populateTeam()
{
	int numForwardsLeft = this->getNumForwards();
	int numMidsLeft = this->getNumMids();
	int numDefendersLeft = this->getNumDefenders();
	int numGoalkeepersLeft = this->getNumGoalkeepers();

	string
		chosenDefenders = "",
		chosenMids = "",
		chosenForwards = "",
		chosenGoalkeepers = "";


	cout << "Select the defenders for you squad and press enter: ";
	while (numDefendersLeft > 0) {
		getline(cin, chosenDefenders);
		//this->defenders->append(chosenDefenders);
		Defender d(chosenDefenders);
		this->defenders[numDefendersLeft-1] = d;
		numDefendersLeft--;
	}

	cout << "Select the midfielders for you squad and press enter: ";
	while (numMidsLeft > 0) {
		getline(cin, chosenMids);
		Midfielder m(chosenMids);
		this->midfielders[numMidsLeft-1] = m;
		//this->midfielders->append(chosenMids);
		numMidsLeft--;
	}

	cout << "Select the forwards for you squad and press enter: ";
	while (numForwardsLeft > 0) {
		getline(cin, chosenForwards);
		Forward f(chosenForwards);
		this->forwards[numForwardsLeft-1] = f;
		//this->forwards->append(chosenForwards);
		numForwardsLeft--;
	}

	cout << "Select the goalkeepers for you squad and press enter: ";
	while (numGoalkeepersLeft > 0) {
		getline(cin, chosenGoalkeepers);
		Goalkeeper g(chosenGoalkeepers);
		this->goalkeepers[numGoalkeepersLeft - 1] = g;
		//this->forwards->append(chosenForwards);
		numGoalkeepersLeft--;
	}

	//displayTeam();
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
