#include <iostream>

#include "MainSystem.h"
#include "HeadItem.h"
#include "Equipment.h"
#include "Character.h"

#define EquipmentUi 1
#define UseEquipment 2
#define GetEquipment 3
#define DeleteEquipment 4

using namespace std;

cHeadItem::cHeadItem()
{

}

cHeadItem::~cHeadItem()
{

}

void cHeadItem::SearchEquipmentCode(cCharacter* pCharacter, cHeadItem* pHeadItem, int nEquipmentNum, int nSelectTool)
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
			cout << "일반 투구";

			break;
		}
		else if (nSelectTool == UseEquipment)
		{
			NormalHeadStats(pCharacter);
			
			break;
		}
		else if (nSelectTool == GetEquipment)
		{
			pHeadItem->m_nEquipmentSlot[0] = nEquipmentNum;

			break;
		}
		else if (nSelectTool == DeleteEquipment)
		{
			break;
		}
	}
	}
}

void cHeadItem::NormalHeadStats(cCharacter* pCharacter)
{
	pCharacter->m_nFullHealth += 100;
}