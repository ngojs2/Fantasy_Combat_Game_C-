/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Barbarian class that inherits from base class Character
** setters and getters, attack function, defense function
******************************************************************************/

#include "barbarian.hpp"

using std::cout;
using std::endl;

// Default constructor
Barbarian::Barbarian()
{
}

// Function to set name
void Barbarian::setName(string name)
{
	this->name = name;
}

// Function to set armor
void Barbarian::setArmor(int armor)
{
	this->armor = armor;
}

// Function to set strength
void Barbarian::setStrength(int strength)
{
	this->strength = strength;
}

// function to get name
string Barbarian::getName()
{
	return name;
}

// Function to get armor
int Barbarian::getArmor()
{
	return armor;
}

// Function to get Strength
int Barbarian::getStrength()
{
	return strength;
}

// Function for Barbarian's attack
// Use loop for the number of rolls
int Barbarian::attack()
{
	int damage = 0;
	// Generate random number for attack
	for (int i = 0; i < 2; i++)
	{
		damage += (rand() % 6 + 1);
	}
	cout << "Attack roll: " << damage << endl;
	cout << "Barbarian attacked an dealt " << damage << " damage" << endl;

	return damage;
}

// Function for Barbarian's defense
// Use loop for the number of rolls
void Barbarian::defense(int dmg)
{
	int damage = 0;
	int defense = 0;

	// Generate random number for defense
	for (int i = 0; i < 2; i++)
	{
		defense += (rand() % 6 + 1);
	}
	
	cout << "Defense roll " << defense << endl;
	cout << "Barbarian blocks " << defense << " damage" << endl;

	// Calculate damage
	// Barb has no armor
	damage = dmg - defense;
	
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

		// Set armor to zero
		// subtract damage from strength
		// Print stats after attack
		armor = 0;
		strength -= damage;
		cout << "Damage was taken" << endl;
		cout << "Stats after attack" << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
		cout << endl;
	}
	
	// If Medusa uses glare, inflict max damage
	if (damage > 100)
	{
		setStrength(0);
		cout << "Barbarian turned into stone from Medusa's Glare" << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
	}

	// If barb dies set strength to zero
	if (strength <= 0)
	{
		setStrength(0);
	}
}

// Deconstructor
Barbarian::~Barbarian()
{
}
