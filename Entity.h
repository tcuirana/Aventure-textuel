#pragma once

class Entity
{
protected:
	const char* m_name;
	int m_Hp;
	int m_Atk;
	int m_Dfs;
public:
	Entity(const char* name, int hp, int atk, int dfs);

	void DisplayStats();
};

