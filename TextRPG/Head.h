#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cHead : public cMainSystem
{
public:
	cHead();
	virtual ~cHead();

	virtual void Head_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cHeadItem* pHeadItem);
	virtual void InventoryClean(cEquipment* pEquipment);

protected:
	int m_nEquipmentSlot[10];
	int m_nEquipmentCount;
	
private:

	friend class cEquipment;
};