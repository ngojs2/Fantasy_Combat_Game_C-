/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Blue men class that inherits from base class Character
** setters and getters, attack function, defense function with mob
******************************************************************************/

#include "bluemen.hpp"

using std::cout;
using std::endl;

// Default constructor
Bluemen::Bluemen()
{
}

// Function to set name
void Bluemen::setName(string name)
{
	this->name = name;
}

// Function to set armor
void Bluemen::setArmor(int armor)
{
	this->armor = armor;
}

// Function to set strength
void Bluemen::setStrength(int strength)
{
	this->strength = strength;
}

// Function to get name
string Bluemen::getName()
{
	return name;
}

// Function to get armor
int Bluemen::getArmor()
{
	return armor;
}

// Function to get strength
int Bluemen::getStrength()
{
	return strength;
}

// Blue men attack function
// use loop for number of rolls
int Bluemen::attack()
{
	int damage = 0;

	for (int i = 0; i < 2; i++)
	{
		damage += (rand() % 10 + 1);
	}
	cout << "Attack roll: " << damage << endl;
	cout << "Bluemen attacked an dealt " << damage << " damage" << endl;

	return damage;

}

// Blue men defense function
// use loop for number of rolls
// subtract 1 die for every 4 damage taken
void Bluemen::defense(int dmg)
{
	int damage = 0;
	int defLost = 0;
	int defense = 0;


	// Loop if no defense is lost
	if (defLost == 0)
	{
		for (int i = 0; i < 3; i++)
		{
			defense += (rand() % 6 + 1);
		}
	}

	// Loop for 1 defense die lost
	else if (defLost == 1)
	{
		for (int i = 0; i < 2; i++)
		{
			defense += (rand() % 6 + 1);
		}
	}

	// Loop for 2 defense die lost
	else if (defLost == 2)
	{
		for (int i = 0; i < 1; i++)
		{
			defense += (rand() % 6 + 1);
		}
	}

	cout << "Defense roll " << defense << endl;
	cout << "Blue Men blocks " << defense << " damage" << endl;

	// Damage calculation
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

	// If damage is greater than zero subtract damage from strength
	else
	{
		// Prints stats before attack
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

	// If medusa uses glare, inflict max damage
	// set strength to zero
	// Dies
	if (damage > 100)
	{
		setStrength(0);
		cout << "Blue Men turned into stone from Medusa's Glare" << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
	}

	// If dies, set strength to zero
	if (strength <= 0)
	{
		setStrength(0);
	}

	// Max defense, zero die lost
	// use defLost in loop
	if (strength > 8 && strength <= 12)
	{
		defLost = 0;
	}

	// 1 Die lost
	// use defLost in loop
	else if (strength > 4 && strength <= 8)
	{
		defLost = 1;
	}

	// 2 die lost
	// use defLost in loop
	else if (strength > 0 && strength <= 4)
	{
		defLost = 2;
	}
}

// Deconstructor
Bluemen::~Bluemen()
{
}
