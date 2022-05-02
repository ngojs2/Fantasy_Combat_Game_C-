/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Menu that contains the game flow, test driver, input
** validation
******************************************************************************/

#include "character.hpp"
#include "vampire.hpp"
#include "barbarian.hpp"
#include "bluemen.hpp"
#include "medusa.hpp"
#include <iostream>
#include <time.h>

#ifndef MENU_HPP
#define MENU_HPP

class Menu
{
private:

	// Pointer
	Character* charP1, * charP2;

public:

	//Function
	void charMenu();
	void game();
	int validation(int);
};
#endif
