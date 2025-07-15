#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cInventory : public cMainSystem
{
public:
	cInventory();
	virtual ~cInventory();

	virtual void Inventory_Ui(cMainSystem* pMainSystem, cMainSystem* pCharacter, cInventory* pInventory, cMainSystem* pItem);
	virtual void GetItem(cInventory* pInventory, cMainSystem* pCharacter, cMainSystem* pItem, int nItemNum, int nItemCount);
	virtual void InventoryClean(cInventory* pInventory, cMainSystem* pCharacter, cMainSystem* pItem, int nItemNum, int nItemCount);

protected:
	int m_nInventorySlot[10];
	int m_nInventoryCount;

private:

	friend class cItem;
};