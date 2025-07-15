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

void cBodyItem::SearchEquipmentCode(cEquipment* pEquipment, int nEquipmentNum, int nSelectTool)
{
	switch (nEquipmentNum)
	{
	case '0':
	case 0:
	{
		cout << "장비 없음";
	}
	case '1':
	case 1:
	{
		if (nSelectTool == EquipmentUi)
		{
			cout << "일반 투구";
		}
		else if (nSelectTool == UseEquipment)
		{
			pEquipment->m_nEquipmentSlot[0] = 1;
		}
		else if (nSelectTool == GetEquipment)
		{
			pEquipment->m_nEquipmentSlot[0] = nEquipmentNum;
		}
		else if (nSelectTool == DeleteEquipment)
		{

		}
	}
	}
}