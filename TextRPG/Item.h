#pragma once

#include <iostream>

#include "MainSystem.h"
#include "Inventory.h"

using namespace std;

class cItem : public cMainSystem
{
public:
	cItem();
	~cItem();

	virtual void SearchItemCode(cMainSystem* pInventory, cMainSystem* pCharacter, int nItemNum, int nItemCount, int nSelectTool);

	virtual void UseBread(cMainSystem* pCharacter);
	virtual void UseHealingPotion(cMainSystem* pCharacter);

protected:
	int m_nMyBread;
	int m_nMyHealingPotion;

private:

	friend class cInventory;
};