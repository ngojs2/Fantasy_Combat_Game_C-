/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Character base class with setters and getters
******************************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using std::string;

class Character
{

protected:

	// Declare variables
	string name;
	int armor = 0;
	int strength = 0;

public:

	// Default constructor
	Character();

	// Virtual so that they can be overidden
	virtual int attack() = 0;
	virtual void defense(int) = 0;

	// Set Functions
	void setName(string);
	void setArmor(int);
	void setStrength(int);

	// Get functions
	string getName();
	int getArmor();
	int getStrength();

	// deconstructor
	virtual ~Character();

};
#endif