#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cItem : public cMainSystem
{
public:
	cItem();
	~cItem();

	virtual void SearchItemCode(cInventory* pInventory, cCharacter* pCharacter, int nItemNum, int nItemCount, int nSelectTool);

	virtual void UseBread(cCharacter* pCharacter);
	virtual void UseHealingPotion(cCharacter* pCharacter);

protected:
	int m_nMyBread;
	int m_nMyHealingPotion;

private:

	friend class cInventory;
};