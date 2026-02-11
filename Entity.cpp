#include "Entity.h"
#include "iostream"

Entity::Entity(const char* name, int hp, int atk, int dfs)
{
	m_name = name;
	m_Hp = hp;
	m_Atk = atk;
	m_Dfs = dfs;
}

void Entity::DisplayStats()
{
	std::cout << "Statistiques : " << m_name << std::endl;
	std::cout << "Hp : " << m_Hp << std::endl;
	std::cout << "Atk : " << m_Atk << std::endl;
	std::cout << "Dfs : " << m_Dfs << std::endl << std::endl;
}

int Entity::GetHp()
{
	return m_Hp;
}

int Entity::GetAtk()
{
	return m_Atk;
}

int Entity::GetDfs()
{
	return m_Dfs;
}