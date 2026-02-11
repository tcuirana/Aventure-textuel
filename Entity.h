#pragma once

class Entity
{
protected:
	const char* m_name;
	int m_Hp = 0;
	int m_Atk = 0;
	int m_Dfs = 0;
public:
	Entity(const char* name, int hp, int atk, int dfs);

	void DisplayStats();
	
	int GetHp();
	int GetAtk();
	int GetDfs();

};

