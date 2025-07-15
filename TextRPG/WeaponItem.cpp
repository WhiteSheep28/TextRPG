#include <iostream>

#include "MainSystem.h"
#include "WeaponItem.h"
#include "Equipment.h"

#define EquipmentUi 1
#define UseEquipment 2
#define GetEquipment 3
#define DeleteEquipment 4

using namespace std;

cWeaponItem::cWeaponItem()
{

}

cWeaponItem::~cWeaponItem()
{

}

void cWeaponItem::SearchEquipmentCode(cEquipment* pEquipment, int nEquipmentNum, int nSelectTool)
{
	switch (nEquipmentNum)
	{
	case '1':
	case 1:
	{
		if (nSelectTool == EquipmentUi)
		{
			cout << "일반 무기";
		}
		else if (nSelectTool == UseEquipment)
		{
			pEquipment->m_nEquipmentSlot[3] = 1;
		}
		else if (nSelectTool == GetEquipment)
		{
			pEquipment->m_nEquipmentSlot[3] = nEquipmentNum;
		}
		else if (nSelectTool == DeleteEquipment)
		{

		}
	}
	}
}