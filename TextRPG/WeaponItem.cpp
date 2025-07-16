#include <iostream>

#include "MainSystem.h"
#include "WeaponItem.h"
#include "Equipment.h"
#include "Character.h"

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

void cWeaponItem::SearchEquipmentCode(cCharacter* pCharacter, cWeaponItem* pWeaponItem, int nEquipmentNum, int nSelectTool)
{
	switch (nEquipmentNum)
	{
	case '0':
	case 0:
	{
		cout << "장비 없음";

		break;
	}
	case '1':
	case 1:
	{
		if (nSelectTool == EquipmentUi)
		{
			cout << "일반 무기";

			break;
		}
		else if (nSelectTool == UseEquipment)
		{
			NormalWeaponStats(pCharacter);

			break;
		}
		else if (nSelectTool == GetEquipment)
		{
			pWeaponItem->m_nEquipmentSlot[3] = nEquipmentNum;

			break;
		}
		else if (nSelectTool == DeleteEquipment)
		{
			break;
		}
	}
	}
}

void cWeaponItem::NormalWeaponStats(cCharacter* pCharacter)
{
	pCharacter->m_nFullAttack += 100;
}