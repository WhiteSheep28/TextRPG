#include <iostream>

#include "MainSystem.h"
#include "BodyItem.h"
#include "Equipment.h"
#include "Character.h"

#define EquipmentUi 1
#define UseEquipment 2
#define GetEquipment 3
#define DeleteEquipment 4

using namespace std;

cBodyItem::cBodyItem()
{

}

cBodyItem::~cBodyItem()
{

}

void cBodyItem::SearchEquipmentCode(cCharacter* pCharacter, cBodyItem* pBodyItem, int nEquipmentNum, int nSelectTool)
{
	switch (nEquipmentNum)
	{
	case '0':
	case 0:
	{
		cout << "Àåºñ ¾øÀ½";

		break;
	}
	case '1':
	case 1:
	{
		if (nSelectTool == EquipmentUi)
		{
			cout << "ÀÏ¹Ý °©¿Ê";

			break;
		}
		else if (nSelectTool == UseEquipment)
		{
			NormalBodyStats(pCharacter);

			break;
		}
		else if (nSelectTool == GetEquipment)
		{
			pBodyItem->m_nEquipmentSlot[1] = nEquipmentNum;

			break;
		}
		else if (nSelectTool == DeleteEquipment)
		{

			break;
		}
	}
	}
}

void cBodyItem::NormalBodyStats(cCharacter* pCharacter)
{
	pCharacter->m_nFullHealth += 100;
}
