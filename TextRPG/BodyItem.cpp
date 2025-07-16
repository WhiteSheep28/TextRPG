#include <iostream>

#include "MainSystem.h"
#include "BodyItem.h"
#include "Equipment.h"

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

void cBodyItem::SearchEquipmentCode(cBodyItem* pBodyItem, int nEquipmentNum, int nSelectTool)
{
	switch (nEquipmentNum)
	{
	case '0':
	case 0:
	{
		cout << "Àåºñ ¾øÀ½";
	}
	case '1':
	case 1:
	{
		if (nSelectTool == EquipmentUi)
		{
			cout << "ÀÏ¹Ý °©¿Ê";
		}
		else if (nSelectTool == UseEquipment)
		{
			pBodyItem->m_nEquipmentSlot[1] = 1;
		}
		else if (nSelectTool == GetEquipment)
		{
			pBodyItem->m_nEquipmentSlot[1] = nEquipmentNum;
		}
		else if (nSelectTool == DeleteEquipment)
		{

		}
	}
	}
}