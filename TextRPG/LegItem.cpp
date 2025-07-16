#include <iostream>

#include "MainSystem.h"
#include "LegItem.h"
#include "Equipment.h"
#include "Character.h"

#define EquipmentUi 1
#define UseEquipment 2
#define GetEquipment 3
#define DeleteEquipment 4

using namespace std;

cLegItem::cLegItem()
{

}

cLegItem::~cLegItem()
{

}

void cLegItem::SearchEquipmentCode(cCharacter* pCharacter, cLegItem* pLegItem, int nEquipmentNum, int nSelectTool)
{
	switch (nEquipmentNum)
	{
	case '0':
	case 0:
	{
		cout << "��� ����";
		
		break;
	}
	case '1':
	case 1:
	{
		if (nSelectTool == EquipmentUi)
		{
			cout << "�Ϲ� ����";

			break;
		}
		else if (nSelectTool == UseEquipment)
		{
			NormalLegStats(pCharacter);

			break;
		}
		else if (nSelectTool == GetEquipment)
		{
			pLegItem->m_nEquipmentSlot[2] = nEquipmentNum;

			break;
		}
		else if (nSelectTool == DeleteEquipment)
		{
			break;
		}
	}
	}
}

void cLegItem::NormalLegStats(cCharacter* pCharacter)
{
	pCharacter->m_nFullHealth += 100;
}