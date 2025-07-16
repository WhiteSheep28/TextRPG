#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cWeapon : public cMainSystem
{
public:
	cWeapon();
	virtual ~cWeapon();

	virtual void Weapon_Ui(cMainSystem* pMainSystem,cCharacter* pCharacter, cWeaponItem* pWeaponItem);
	virtual void InventoryClean(cEquipment* pEquipment);

protected:
	int m_nEquipmentSlot[10];
	int m_nEquipmentCount;

private:

	friend class cEquipment;
};
