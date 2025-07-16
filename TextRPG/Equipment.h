#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cEquipment : public cMainSystem
{
public:
	cEquipment();
	virtual ~cEquipment();

	virtual void Equipment_Ui(cMainSystem* pMainSystem, cEquipment* pEquipment, 
		cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
		cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon);

protected:
	int m_nEquipmentSlot[4];
	int m_nEquipmentCount;

private:

	friend class cHeadItem;
	friend class cBodyItem;
	friend class cLegItem;
	friend class cWeaponItem;
	friend class cHead;
	friend class cBody;
	friend class cLeg;
	friend class cWeapon;
};