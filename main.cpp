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
	std::cout << "Dfs : " << dfs << std::endl;

	Sleep(4000);
	system("cls");

	return 0;
}