/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Blue men class that inherits from base class Character
** setters and getters, attack function, defense function with mob
******************************************************************************/

#include "character.hpp"
#include <time.h>
#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

// Inherits from base class character
class Bluemen : public Character
{
	
public:

	// Default Constructor
	Bluemen();

	int attack();
	void defense(int);

	// Set Functions
	void setName(string);
	void setArmor(int);
	void setStrength(int);

	// Get functions
	string getName();
	int getArmor();
	int getStrength();

	// Deconstructor
	~Bluemen();
};
#endif
