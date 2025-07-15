#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cInventory : public cMainSystem
{
public:
	cInventory();
	virtual ~cInventory();

	virtual void Inventory_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cInventory* pInventory, cItem* pItem);
	virtual void GetItem(cInventory* pInventory, cCharacter* pCharacter, cItem* pItem, int nItemNum, int nItemCount);
	virtual void InventoryClean(cInventory* pInventory, cCharacter* pCharacter, cItem* pItem, int nItemNum, int nItemCount);

protected:
	int m_nInventorySlot[10];
	int m_nInventoryCount;

private:

	friend class cItem;
};