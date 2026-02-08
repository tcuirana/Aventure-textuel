#include <iostream>

int main()
{
	std::cout << "Bienvenue dans le donjon !" << std::endl;

	//Choose a class
	int classChoice;
	std::cout << "Choisir une classe : Guerrier(1), Mage(2), Archer(3)";
	std::cin >> classChoice;

	switch (classChoice)
	{
	case(1):
		std::cout << "Vous avez choisi le Guerrier." << std::endl;
		break;
	case(2):
		std::cout << "Vous avez choisi le Mage." << std::endl;
		break;
	case(3):
		std::cout << "Vous avez choisi l Archer." << std::endl;
		break;
	}

	//Stats Initialization
	if (classChoice == 1)
	{
		//Warrior Stats
		int hp = 200;
		int atk = 30;
		int dfs = 15;
	}
	else if (classChoice == 2)
	{
		//Wizard Stats
		int hp = 120;
		int atk = 5;
		int dfs = 5;
	}
	else if (classChoice == 3)
	{
		//Bowman Stats
		int hp = 120;
		int atk = 5;
		int dfs = 5;
	}



	return 0;
}