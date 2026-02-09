#include <iostream>
#include <windows.h>

int main()
{
	std::cout << "Bienvenue dans le donjon !" << std::endl << std::endl;

	//Choose a class
	int classChoice;
	std::cout << "Choisir une classe : Guerrier (1), Mage (2), Archer (3)";
	std::cin >> classChoice;

	//Choice display
	switch (classChoice)
	{
	case(1):
		std::cout << "Vous avez choisi le Guerrier." << std::endl << std::endl;
		break;
	case(2):
		std::cout << "Vous avez choisi le Mage." << std::endl << std::endl;
		break;
	case(3):
		std::cout << "Vous avez choisi l Archer." << std::endl << std::endl;
		break;
	}
	

	//Stats initialization
	int hp = 0;
	int atk = 0;
	int dfs = 0;

	if (classChoice == 1)
	{
		//Warrior stats
		hp = 200;
		atk = 20;
		dfs = 15;
	}
	else if (classChoice == 2)
	{
		//Wizard stats
		hp = 120;
		atk = 25;
		dfs = 5;
	}
	else if (classChoice == 3)
	{
		//Bowman stats
		hp = 150;
		atk = 20;
		dfs = 10;
	}

	//Stats display
	std::cout << "Vos statistiques :" << std::endl;
	std::cout << "Hp : " << hp << std::endl;
	std::cout << "Atk : " << atk << std::endl;
	std::cout << "Dfs : " << dfs << std::endl << std::endl;

	//Sleep(4000);
	//system("cls");

	std::cout << "Un Gobelin apparait." << std::endl << std::endl;
	std::cout << "Statistiques du gobelin :" << std::endl;
	
	//Goblin Stats
	int gobHp = 180;
	int gobAtk = 35;
	int gobDfs = 8;

	//Display Goblin Stats
	std::cout << "Hp : " << gobHp << std::endl;
	std::cout << "Atk : " << gobAtk << std::endl;
	std::cout << "Dfs : " << gobDfs << std::endl << std::endl;

	//Action
	std::cout << "Que voulez vous faire ?" << std::endl;
	std::cout << "1 :  Attaquer" << std::endl;
	std::cout << "2 : Se soigner" << std::endl;
	int choice;
	std::cin >> choice;

	if (choice == 1)
	{
		int dmg = atk - gobDfs;
		
			if (dmg < 1)
			{	
				dmg = 1;
			}

		gobHp -= dmg;
	}
	else if (choice == 2 )
	{
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

	return 0;
}