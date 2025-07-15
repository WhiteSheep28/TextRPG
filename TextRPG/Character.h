#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cCharacter : public cMainSystem
{
public:
	cCharacter();
	~cCharacter();

	virtual void My_Stats();
	virtual void Skill_Tree() { ; }

protected:
	string m_strName;
	int m_nHealth;
	int m_nAttack;
	int m_nDefense;
	int m_nMana;
	int m_nHungry;

private:

	friend class cItem;
};