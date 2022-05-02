/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Character base class with setters and getters
******************************************************************************/

#include "character.hpp"

// Default constructor
Character::Character()
{
}

// function to set name
void Character::setName(string name)
{
	this->name = name;
}

// function to set armor
void Character::setArmor(int armor)
{
	this->armor = armor;
}

// function to set strength
void Character::setStrength(int strength)
{
	this->strength = strength;
}

// function to get name
string Character::getName()
{
	return name;
}

// function to get armor
int Character::getArmor()
{
	return armor;
}

// function to get strength
int Character::getStrength()
{
	return strength;
}

// Deconstructor
Character::~Character()
{
}