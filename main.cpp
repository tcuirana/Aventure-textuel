#include <iostream>

int main()
{
	std::cout << "Bienvenue dans le donjon !" << std::endl;

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



	return 0;
}