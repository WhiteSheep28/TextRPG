#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cLeg : public cMainSystem
{
public:
	cLeg();
	virtual ~cLeg();

	virtual void Leg_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cLegItem* pLegItem);
	virtual void InventoryClean(cEquipment* pEquipment);

protected:
	int m_nEquipmentSlot[10];
	int m_nEquipmentCount;

private:

	friend class cEquipment;
};