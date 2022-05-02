/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Vampire class that inherits from base class Character
** setters and getters, attack function, defense function with charm
******************************************************************************/

#include "vampire.hpp"

using std::cout;
using std::endl;

// Default constructor
Vampire::Vampire()
{
}

// function to set name
void Vampire::setName(string name)
{
	this->name = name;
}

// function to set armor
void Vampire::setArmor(int armor)
{
	this->armor = armor;
}

// function to set strength
void Vampire::setStrength(int strength)
{
	this->strength = strength;
}

// function to get name
string Vampire::getName()
{
	return name;
}

// function to get armor
int Vampire::getArmor()
{
	return armor;
}

// function to get strength
int Vampire::getStrength()
{
	return strength;
}

// Vampire attack function
int Vampire::attack()
{
	int damage = 0;

	// get random attack damage
	for (int i = 0; i < 1; i++)
	{
		damage += (rand() % 12 + 1);
	}
	
	// print roll
	cout << "Attack roll: " << damage << endl;
	cout << "Vampire attacked and dealt " << damage << " damage" << endl;
	
	return damage;
}

void Vampire::defense(int dmg)
{
	int charm;
	int damage = 0;
	int defense = 0;

	// get random number for charm
	charm = (rand() % 2 + 1);

	// get random defense number
	for (int i = 0; i < 1; i++)
	{
		defense += (rand() % 6 + 1);
	}

	// print roll
	cout << "Defense roll " << defense << endl;
	cout << "Vampire blocks " << defense << " damage" << endl;

	// damage calculation
	damage = dmg - defense - armor;
	
	// If damage is less than zero set to zero
	if (damage < 0)
	{
		damage = 0;
		cout << "No damage was taken" << endl;
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
		cout << "Vampire turned into stone from Medusa's Glare" << endl;
	}

	// charm
	// 50% chance of opponent missing attack
	// Take no damage if charmed
	if (charm == 1)
	{
		cout << "Vampire used charm, no damage was taken" << endl;
		cout << "Armor: " << armor << endl;
		cout << "Strength: " << strength << endl;
		cout << endl;
	}

	// If damage is greater than zero
	// subtract damage from strength
	else
	{
		// print stats before attack
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

	// If vampire dies set strength to zero
	if (strength <= 0)
	{
		setStrength(0);
	}
}

// deconstructor
Vampire::~Vampire()
{
}

