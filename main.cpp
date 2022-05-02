/******************************************************************************
** Program name : Project 3
** Author : Jeffrey Ngo
** Date : 11 / 10 / 2019
** Description : Main function to start the program by calling all the 
** necessary functions
******************************************************************************/

#include "menu.hpp"
#include <iostream>
#include <time.h>

int main()
{
	srand(time(NULL));
	Menu startGame;
	startGame.game();
	return 0;
}