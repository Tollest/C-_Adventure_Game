#include <iostream>

using namespace std;

int main()
{
	//Hello World Function
	std::cout << "Welcome to the Dragon Realm!" << std::endl;

	//Declare string variable holding players name
	std::string playerName;

	//Prompt user to enter player name
	std::cout << "Please enter your name ";
	std::cin >> playerName;

	//Display personalized welcome message using player name
	std::cout << "Welcome " << playerName << std::endl;

	//Declare an int variable that captures the players choice
	int choice;

	//Offer the player a choice of locations
	std::cout << "Where will you go?" << std::endl;
	std::cout << "1. Deep Dark Caves" << std::endl;
	std::cout << "2. Misty Mountain" << std::endl;
	std::cout << "3. Baby Boy Meadow" << std::endl;
	std::cout << "Please enter your choice: " << std::endl;

	//User assigns value to choice
	//std::cin >> choice;

	/*if (choice == 1) {
		std::cout << "You chose: Deep Dark Caves" << std::endl;
	}
	else if (choice == 2) {
		std::cout << "You chose: Misty Mountain" << std::endl;
	}
	else if (choice == 3) {
		std::cout << "You chose: Baby Boy Meadow" << std::endl;
	}
	else {
		std::cout << "Invalid choice" << std::endl;
	}
	*/

	//Checks the users choice and displays the corresponding message

	while (true)
	{
		char choice;
		cin >> choice;
		switch (choice) {
		case '1':
			std::cout << "You chose: Deep Dark Caves" << std::endl;
			break;
		case '2':
			std::cout << "You chose: Misty Mountain" << std::endl;
			break;
		case '3':
			std::cout << "You chose: Baby Boy Meadow" << std::endl;

			cout << playerName << " enters the Baby Boy Meadow." << endl << "Word has it that it is the safest place to explore." << endl;
			cout << "The meadow has many flowers blooming to the East, and a pond lies to the North. Where will you go?" << endl;
			while (true)
			{
				char meadowChoice;
				cin >> meadowChoice;
				switch (meadowChoice) {
				case 'E':
				case 'e':
					cout << "You travel east towards the blooming flowers." << endl;
					break;

				case 'N':
				case 'n':
					cout << "You travel North towards the lake." << endl;
					break;
				}

			}

			break;
		default:
			std::cout << "That is an invalid answer. Please enter 1, 2, or 3." << std::endl;

		}
	}





}