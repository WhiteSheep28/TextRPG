#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cCharacter : public cMainSystem
{
public:
	cCharacter();
	~cCharacter();

	virtual void My_Stats(cCharacter* pCharacter, cEquipment* pEquipment,
		cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem);
	virtual void Skill_Tree() { ; }

	virtual string GetName() { return m_strName; }
	virtual int GetFullHealth() { return m_nFullHealth; }
	virtual int GetFullAttack() { return m_nFullAttack; }
	virtual int GetFullDefense() { return m_nFullDefense; }
	virtual int GetFullMana() { return m_nFullMana; }

protected:
	string m_strName;
	int m_nHealth;
	int m_nFullHealth;
	int m_nAttack;
	int m_nFullAttack;
	int m_nDefense;
	int m_nFullDefense;
	int m_nMana;
	int m_nFullMana;
	int m_nHungry;

private:

	friend class cItem;
	friend class cHeadItem;
	friend class cBodyItem;
	friend class cLegItem;
	friend class cWeaponItem;

};