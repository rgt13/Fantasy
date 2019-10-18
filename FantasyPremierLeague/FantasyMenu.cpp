#include "FantasyMenu.h"
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::second

using namespace std;

FantasyMenu::FantasyMenu()
{
	this->p = new Player();
	this->quit = false;
}

void FantasyMenu::displayMenu()
{
	char choice = NULL;
	string teamName,
		chosenDefenders = "",
		chosenMidfielders = "",
		chosenForwards = "",
		chosenGoalkeepers = "";

	cout << "----------Welcome to Ryan's Fantasy App!----------\n";

	do
	{
		cout << "Please select one of the following options:\n\n";
		cout << "C -> Create new team\n";
		cout << "D -> Display your current team\n";
		cout << "Q -> Quit the application \n\n";

		cout << "---> ";

		cin >> choice;

		if (choice == 'c' || choice == 'C') {
			cout << "Enter a team name: ";

			cin >> teamName;

			this->p = new Player(teamName);
			this->p->createTeam();
			this->p->populateTeam();

			cout << "/nTeam created.\n\n";
		}

		else if (choice == 'd' || choice == 'D')
		{
			this->p->displayTeam();
		}

		else if (choice == 'q' || choice == 'Q')
		{
			cout << "Quitting fantasy app...\n\n";
			
			this_thread::sleep_for(chrono::seconds(3));

			cout << "Application closed!" << endl;
			this->quit = true;
		}

	} while (this->quit == false);
}
