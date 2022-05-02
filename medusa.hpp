/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Medusa class that inherits from base class Character
** setters and getters, attack function with glare, defense function
******************************************************************************/

#include "character.hpp"
#include <time.h>
#ifndef MEDUSA_HPP
#define MEDUSA_HPP

// Inherits from base class character
class Medusa : public Character
{

public:
	
	// Default constructor
	Medusa();

	int attack() override;
	void defense(int);

	// Set functions
	void setName(string);
	void setArmor(int);
	void setStrength(int);

	// Get functions
	string getName();
	int getArmor();
	int getStrength();
	
	// Deconstructor
	~Medusa();
};
#endif
