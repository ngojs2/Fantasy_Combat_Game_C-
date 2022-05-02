/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Medusa class that inherits from base class Character
** setters and getters, attack function with glare, defense function
******************************************************************************/

#include "medusa.hpp"

using std::cout;
using std::endl;

// Default constructor
Medusa::Medusa()
{
}

// Function to set name
void Medusa::setName(string name)
{
	this->name = name;
}

// Function to set armor
void Medusa::setArmor(int armor)
{
	this->armor = armor;
}

// Function to set strength
void Medusa::setStrength(int strength)
{
	this->strength = strength;
}

// function to get name
string Medusa::getName()
{
	return name;
}

// Function to get armor
int Medusa::getArmor()
{
	return armor;
}

// Function to get strength
int Medusa::getStrength()
{
	return strength;
}

// Medusa attack function
// loop for number of rolls
// if roll 12 turn opponent into stone
int Medusa::attack()
{
	int damage = 0;
	// get random attack number
	for (int i = 0; i < 2; i++)
	{
		damage += (rand() % 6 + 1);
	}

	// If roll 12
	// inflict max damage and turn opponent into stone
	if (damage == 12)
	{
		cout << "Medusa roll 12 and used Glare" << endl;
		damage = 350;
		
	}

	// print damage
	else
	{
		cout << "Attack roll: " << damage << endl;
		cout << "Medusa attacked an dealt " << damage << " damage" << endl;
	}
	return damage;
}

void Medusa::defense(int dmg)
{
	int damage = 0;
	int defense = 0;

	// get random defense number
	for (int i = 0; i < 1; i++)
	{
		defense += (rand() % 6 + 1);
	}
	// print roll
	cout << "Defense roll " << defense << endl;
	cout << "Medusa blocks " << defense << " damage" << endl;

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

	// If medusa uses glare, inflict max damage
	// set strength to zero
	// Dies
	if (damage > 100)
	{
		setStrength(0);
		cout << "Medusa turned into stone from Medusa's Glare" << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
	}

	// If medusa dies set strength to zero
	if (strength <= 0)
	{
		setStrength(0);
	}

}

// Deconstructor
Medusa::~Medusa()
{
}

