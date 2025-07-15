#pragma once

#include <iostream>

#include "MainSystem.h"
#include "Item.h"

using namespace std;

class cInventory : public cMainSystem
{
public:
	cInventory();
	virtual ~cInventory();

	virtual void Inventory_Ui(cMainSystem* pMainSystem, cMainSystem* pCharacter, cMainSystem* pInventory, cMainSystem* pItem);
	virtual void GetItem(cMainSystem* pInventory, cMainSystem* pCharacter, cMainSystem* pItem, int nItemNum, int nItemCount);
	virtual void InventoryClean(cMainSystem* pInventory, cMainSystem* pCharacter, cMainSystem* pItem, int nItemNum, int nItemCount);

protected:
	int m_nInventorySlot[10];
	int m_nInventoryCount;

private:

	friend class cItem;
};