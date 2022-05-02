/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Vampire class that inherits from base class Character
** setters and getters, attack function, defense function with charm
******************************************************************************/

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "character.hpp"
#include <time.h>

// Inherits from base class character
class Vampire : public Character
{

public:

	// Default constructor
	Vampire();

	int attack();
	void defense(int) override;

	// Set functions
	void setName(string);
	void setArmor(int);
	void setStrength(int);

	// Get functions
	string getName();
	int getArmor();
	int getStrength();

	// Deconstructor
	~Vampire();
};
#endif