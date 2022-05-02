/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Harry Potter class that inherits from base class Character
** setters and getters, attack function, defense function with hogwarts
******************************************************************************/

#include "character.hpp"
#include <time.h>
#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

// Inherits from base class character
class Harrypotter : public Character
{

public:
	
	// Default constructor
	Harrypotter();

	int attack();
	void defense(int);

	// Set function
	void setName(string);
	void setArmor(int);
	void setStrength(int);

	// Get functions
	string getName();
	int getArmor();
	int getStrength();
	
	// Deconstructor
	~Harrypotter();
};
#endif