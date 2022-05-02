/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Harry Potter class that inherits from base class Character
** setters and getters, attack function, defense function with hogwarts
******************************************************************************/

#include "harrypotter.hpp"

using std::cout;
using std::endl;

// Default constructor
Harrypotter::Harrypotter()
{
}

// Functon to set name
void Harrypotter::setName(string name)
{
	this->name = name;
}

// function to set armor
void Harrypotter::setArmor(int armor)
{
	this->armor = armor;
}

// function to set strength
void Harrypotter::setStrength(int strength)
{
	this->strength = strength;
}

// function to get name
string Harrypotter::getName()
{
	return name;
}

// function to get armor
int Harrypotter::getArmor()
{
	return armor;
}

// function to get strength
int Harrypotter::getStrength()
{
	return strength;
}

// Harry potter attack function
// Loop for the number of rolls
// Print roll and damage
int Harrypotter::attack()
{
	int damage = 0;

	for (int i = 0; i < 2; i++)
	{
		damage += (rand() % 6 + 1);
	}

	cout << "Attack roll: " << damage << endl;
	cout << "Harry Potter attacked and dealt " << damage << " damage" << endl;
	return damage;
}

// Harry potter defense function
// Loop for the number of rolls
// Print roll and defense
void Harrypotter::defense(int dmg)
{
	int damage = 0;
	int defense = 0;
	bool hogwarts = true;

	// Loop for random defense number
	for (int i = 0; i < 2; i++)
	{
		defense += (rand() % 6 + 1);
	}

	cout << "Defense roll " << defense << endl;
	cout << "Harry Potter blocks " << defense << " damage" << endl;

	// damage calculation
	damage = dmg - defense - armor;

	// If damage is less than zero set to zero
	if (damage <= 0)
	{
		damage = 0;
		cout << "No damage was taken" << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
		cout << endl;
	}

	// If damage is greater than zero
	// subtract damage from strength
	else
	{
		// Print stats before attack
		cout << "Stats before attack" << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;

		// lost armor
		// Subtract damage from strength
		// Print stats after attack
		armor = 0;
		strength -= damage;
		cout << "Damage was taken" << endl;
		cout << "Stats after attack" << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
		cout << endl;
	}

	// If medusa uses glare
	// Harry potter recovers
	// strength to 20
	// set hogwarts to false
	if (damage > 100 && hogwarts == true)
	{
		cout << "Harry Potter turned into stone from Medusa's Glare" << endl;
		cout << "Harry quickly recovers and is stronger than before with 20 strength" << endl;
		setStrength(20);
		hogwarts = false;
	}

	// If medusa uses glare 2nd time
	// No hogwarts to recover
	// Harry potter dies, set strength to zero
	else if (damage > 100 && hogwarts == false)
	{
		setStrength(0);
		cout << "Harry Potter turned into stone from Medusa's Glare" << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
	}

	// If harry potter dies
	// Use hogwarts to recover
	// Set strength to 20
	// set hogwarts to false
	if (strength <= 0 && hogwarts == true)
	{
		cout << "Harry was defeated" << endl;
		cout << "Harry quickly recovers and is stronger than before with 20 strength" << endl;
		setStrength(20);
		hogwarts = false;
	}

	// Harry dies for 2nd time
	// No hogwarts to recover
	// set strength to zero
	else if (strength <= 0 && hogwarts == false)
	{
		cout << "Harry was defeated" << endl;
		setStrength(0);
	}
}

// Deconstructor
Harrypotter::~Harrypotter()
{
}
