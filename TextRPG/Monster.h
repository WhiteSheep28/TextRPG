#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cMonster : public cMainSystem
{
public:
	cMonster();
	virtual ~cMonster();

	virtual string GetName() { return m_strName; }
	virtual int GetHealth() { return m_nHealth; }
	virtual int GetAttack() { return m_nAttack; }
	virtual int GetDefense() { return m_nDefense; }
	virtual int GetMana() { return m_nMana; }

protected:

private:

};