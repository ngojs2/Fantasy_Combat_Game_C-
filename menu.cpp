/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Menu that contains the game flow, test driver, input
** validation
******************************************************************************/

#include "menu.hpp"
#include "character.hpp"
#include "vampire.hpp"
#include "barbarian.hpp"
#include "bluemen.hpp"
#include "medusa.hpp"
#include "harrypotter.hpp"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

// Function for input validation
int Menu::validation(int val)
{
	while (!(std::cin >> val))
	{
		std::cout << "Please select another number" << std::endl;
		std::cin.clear();
		std::cin.ignore(100, '\n');
	}
	return val;
}

// Character menu
void Menu::charMenu()
{
	cout << "Choose your character" << endl;
	cout << "1. Vampire" << endl;
	cout << "2. Barbarian" << endl;
	cout << "3. Blue Men" << endl;
	cout << "4. Medusa" << endl;
	cout << "5. Harry Potter" << endl;
}

// Game flow function
void Menu::game()
{
	// Declare variables
	int choice = 0;
	int menuChoice = 0;
	int choiceP1 = 0;
	int choiceP2 = 0;
	int damage = 0;


	// Intro game and characters
	cout << "Welcome to Fantasy Combat" << endl;
	cout << endl;
	cout << "Here are your characters and their abilities" << endl;
	cout << "Vampire: Attack: 1d12, Defense 1d6, Armor 1, Strength 18" << endl;
	cout << "Special: Charm(50% chance of opponent missing attack)" << endl;
	cout << "Barbarian: Attack: 2d6, Defense 2d6, Armor 0, Strength 12" << endl;
	cout << "Special: None" << endl;
	cout << "Blue Men: Attack: 2d10, Defense 3d6, Armor 3, Strength 12" << endl;
	cout << "Special: Mob(For every 4 damage taken, lose 1 defense die)" << endl;
	cout << "Medusa: Attack: 2d6, Defense 1d6, Armor 3, Strength 8" << endl;
	cout << "Special: Glare(Roll 12, instant kill and turn opponent into stone)" << endl;
	cout << "Harry Potter: Attack: 2d6, Defense 2d6, Armor 0, Strength 10" << endl;
	cout << "Special: Hogwarts(When defeated, Recover once with double strength)" << endl;
	cout << "1d12, 2d6, etc. First number means number of rolls and the second number means number of sides on Dice" << endl;
	cout << "Example: 1d12 = 1 roll of a 12 sided dice" << endl;
	cout << endl;

	// Start menu
	cout << "1. Start Battle" << endl;
	cout << "2. Exit" << endl;
	menuChoice = validation(menuChoice);

	//input validation for menu choice
	while (menuChoice != 1 && menuChoice != 2)
	{
		cout << "Please select 1 or 2" << endl;
		menuChoice = validation(menuChoice);
	}

	// Start game if choice == 1
	if (menuChoice == 1)
	{
		cout << "Player 1" << endl;
		// Call character menu for player to choose
		charMenu();
		// input validation
		choiceP1 = validation(choiceP1);

		// If Player 1 chooses vampire
		// set name, armor, strength
		if (choiceP1 == 1)
		{
			charP1 = new Vampire;
			charP1->setName("Vampire");
			charP1->setArmor(1);
			charP1->setStrength(18);
		}

		// If Player 1 chooses barbarian
		// set name, armor, strength
		if (choiceP1 == 2)
		{
			charP1 = new Barbarian;
			charP1->setName("Barbarian");
			charP1->setArmor(0);
			charP1->setStrength(12);
		}

		// If Player 1 chooses Blue Men
		// set name, armor, strength
		if (choiceP1 == 3)
		{
			charP1 = new Bluemen;
			charP1->setName("Blue Men");
			charP1->setArmor(3);
			charP1->setStrength(12);
		}

		// If Player 1 chooses medusa
		// set name, armor, strength
		if (choiceP1 == 4)
		{
			charP1 = new Medusa;
			charP1->setName("Medusa");
			charP1->setArmor(3);
			charP1->setStrength(8);
		}

		// If Player 1 chooses harry potter
		// set name, armor, strength
		if (choiceP1 == 5)
		{
			charP1 = new Harrypotter;
			charP1->setName("Harry Potter");
			charP1->setArmor(0);
			charP1->setStrength(10);
		}

		cout << "Player 2" << endl;
		charMenu();
		choiceP2 = validation(choiceP2);

		// If Player 2 chooses vampire
		// set name, armor, strength
		if (choiceP2 == 1)
		{
			charP2 = new Vampire;
			charP2->setName("Vampire");
			charP2->setArmor(1);
			charP2->setStrength(18);
		}

		// If Player 2 chooses barbarian
		// set name, armor, strength
		if (choiceP2 == 2)
		{
			charP2 = new Barbarian;
			charP2->setName("Barbarian");
			charP2->setArmor(0);
			charP2->setStrength(12);
		}

		// If Player 2 chooses Blue Men
		// set name, armor, strength
		if (choiceP2 == 3)
		{
			charP2 = new Bluemen;
			charP2->setName("Blue Men");
			charP2->setArmor(3);
			charP2->setStrength(12);
		}

		// If Player 2 chooses Medusa
		// set name, armor, strength
		if (choiceP2 == 4)
		{
			charP2 = new Medusa;
			charP2->setName("Medusa");
			charP2->setArmor(3);
			charP2->setStrength(8);
		}

		// If Player 2 chooses Harry potter
		// set name, armor, strength
		if (choiceP2 == 5)
		{
			charP2 = new Harrypotter;
			charP2->setName("Harry Potter");
			charP2->setArmor(0);
			charP2->setStrength(10);
		}

		// Prints player 1 selection and characters starting stats
		cout << "Player 1 selects: " << charP1->getName() << endl;
		cout << "Starting Stats" << endl;
		cout << "Armor: " << charP1->getArmor() << endl;
		cout << "Strength: " << charP1->getStrength() << endl;
		cout << endl;

		// Prints player 2 selection and characters starting stats
		cout << "Player 2 selects: " << charP2->getName() << endl;
		cout << "Starting Stats" << endl;
		cout << "Armor: " << charP2->getArmor() << endl;
		cout << "Strength: " << charP2->getStrength() << endl;
		cout << endl;

		// Randomly select who goes first
		int goFirst = (rand() % 2 + 1);
		
		// If player1 goes first
		if (goFirst == 1)
		{
			cout << "Player 1 Attacks first" << endl;
			while (charP1->getStrength() && charP2->getStrength())
			{
				// Player 1 attacks
				cout << "Player 1's " << charP1->getName() << " attacks" << endl;
				damage = charP1->attack();

				// Player 2 defends
				cout << "Player 2's " << charP2->getName() << " defends" << endl;
				charP2->defense(damage);

				// If player 2 dies, Player 1 wins
				if (charP2->getStrength() <= 0)
				{
					cout << "Player 2's " << charP2->getName() << " died" << endl;
					cout << "Player 1 wins the game!" << endl;
				}

				// If Player 2 is alive, Player 2 attacks
				// Player 1 defends
				else if (charP2->getStrength() > 0)
				{
					// Player 2 attacks
					cout << "Player 2's " << charP2->getName() << " attacks" << endl;
					damage = charP2->attack();

					// Player 1 defends
					cout << "Player 1's " << charP1->getName() << " defends" << endl;
					charP1->defense(damage);

					// If player 1 dies, player 2 wins
					if (charP1->getStrength() <= 0)
					{
						cout << "Player 1's " << charP1->getName() << " died" << endl;
						cout << "Player 2 wins the game!" << endl;
					}
				}
			}
		}

		// Player 2 goes first
		else
		{
			cout << "Player 2 Attacks first" << endl;
			while (charP1->getStrength() && charP2->getStrength())
			{
				// Player 2 attacks
				cout << "Player 2's " << charP2->getName() << " attacks" << endl;
				damage = charP2->attack();

				// Player 1 defends
				cout << "Player 1's " << charP1->getName() << " defends" << endl;
				charP1->defense(damage);

				// If player 1 dies, player 2 wins
				if (charP1->getStrength() <= 0)
				{
					cout << "Player 1's " << charP1->getName() << " died" << endl;
					cout << "Player 2 wins the game!" << endl;
				}

				// If player 1 is alive, player 1 attacks
				// player 2 defends
				else if (charP1->getStrength() > 0)
				{
					// Player 1 attacks
					cout << "Player 1's " << charP1->getName() << " attacks" << endl;
					damage = charP1->attack();

					// Player 2 defends
					cout << "Player 2's " << charP2->getName() << " defends" << endl;
					charP2->defense(damage);

					// If player 2 dies, Player 1 wins
					if (charP2->getStrength() <= 0)
					{
						cout << "Player 2's " << charP2->getName() << " died" << endl;
						cout << "Player 1 wins the game!" << endl;
						
					}
				}

			}
			// free memory
			delete charP1;
			delete charP2;
		}

		// Menu to play again
		cout << endl;
		cout << "1. Play Again" << endl;
		cout << "2. Exit the game" << endl;
		//input validation
		choice = validation(choice);
		while (choice != 1 && choice != 2)
		{
			cout << "Please select 1 or 2" << endl;
			choice = validation(choice);
		}

		if (choice == 1)
		{
			game();
		}
		
		else if (choice == 2)
		{
			exit(0);
		}

	}
}