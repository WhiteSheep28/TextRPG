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
	virtual int GetFullHealth() { return m_nFullHealth; }
	virtual int GetFullAttack() { return m_nFullAttack; }
	virtual int GetFullDefense() { return m_nFullDefense; }
	virtual int GetFullMana() { return m_nFullMana; }

protected:

private:

};