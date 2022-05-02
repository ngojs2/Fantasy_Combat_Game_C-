/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Barbarian class that inherits from base class Character
** setters and getters, attack function, defense function
******************************************************************************/

#include "character.hpp"
#include <time.h>
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

// Inherits from base class character
class Barbarian : public Character
{

public:

	// Default Constructor
	Barbarian();

	int attack();
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
	~Barbarian();
};
#endif

