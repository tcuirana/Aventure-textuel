#include <iostream>
#include <windows.h>
#include "Entity.h"

int main()
{
	std::cout << "Bienvenue dans le donjon !" << std::endl << std::endl;

	//Choose a class
	int classChoice;
	std::cout << "Aventurier choisissez une classe : Guerrier (1), Mage (2), Archer (3)";
	std::cin >> classChoice;

	//Stats Initialisation 
	int hp = 0;
	int atk = 0;
	int dfs = 0;

	//Choice display
	switch (classChoice)
	{
	case(1):
		std::cout << "Vous avez choisi le Guerrier." << std::endl << std::endl;
		hp = 200;
		atk = 30;
		dfs = 15;
		break;
	case(2):
		std::cout << "Vous avez choisi le Mage." << std::endl << std::endl;
		hp = 120;
		atk = 5;
		dfs = 5;
		break;
	case(3):
		std::cout << "Vous avez choisi l Archer." << std::endl << std::endl;
		hp = 150;
		atk = 7;
		dfs = 7;
		break;
	}

	Entity adventurer("Aventurier", hp, atk, dfs);

	//Stats display
	adventurer.DisplayStats();

	//Sleep(4000);
	//system("cls");

	std::cout << "Un Gobelin apparait." << std::endl << std::endl;
	
	//Goblin Stats
	int gobHp = 180;
	int gobAtk = 35;
	int gobDfs = 8;

	Entity goblin("Gob", gobHp, gobAtk, gobDfs);

	//Display Goblin Stats
	goblin.DisplayStats();

	//Adventurer Action choice
	std::cout << "Que voulez vous faire ?" << std::endl;
	std::cout << "1 :  Attaquer" << std::endl;
	std::cout << "2 : Se soigner" << std::endl;
	int actionChoice;
	std::cin >> actionChoice;

	if (actionChoice == 1)
	{
		//Attack
		int dmg = atk - gobDfs;
		
			if (dmg < 1)
			{	
				dmg = 1;
			}

		gobHp -= dmg;
		goblin.DisplayStats();
	}
	else if (actionChoice == 2 && hp < 200)
	{
		//Healing
		if (hp <= 150 || hp == 150)
		{
			hp += 50;
		}
		else if (hp >= 150)
		{
			hp = 200;
		}
	}
	else if (hp == 200)
	{
		std::cout << "Vous avez toute votre vie !" << std::endl << std::endl;
	}

	//Ennemy's turn
	std::cout << "Le goblin vous attaque !" << std::endl << std::endl;
	int gobDmg = gobAtk - dfs;

	hp = gobDmg - adventurer.GetHp(); //Set + Get 

	adventurer.DisplayStats();

	return 0;
}