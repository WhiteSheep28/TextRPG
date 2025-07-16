#include <iostream>

#include "MainSystem.h"
#include "Equipment.h"
#include "Body.h"
#include "BodyItem.h"

#define LastEquipmentSlot 10

using namespace std;

cBody::cBody()
{
	memset(m_nEquipmentSlot, 0, 10 * sizeof(int));
	m_nEquipmentCount = 0;
}

cBody::~cBody()
{

}

void cBody::Body_Ui(cMainSystem* pMainSystem, cBodyItem* pBodyItem)
{
	while (1)
	{
		system("cls");

		m_nEquipmentCount = 0;

		cout << "{ °©¿Ê ÀÎº¥Åä¸® }" << endl;

		while (m_nEquipmentCount < LastEquipmentSlot)
		{
			cout << m_nEquipmentCount << ". ";

			pBodyItem->SearchEquipmentCode(pBodyItem, m_nEquipmentSlot[m_nEquipmentCount], 1);

			cout << endl;

			m_nEquipmentCount++;
		}

		cout << "Space. µÚ·Î°¡±â" << endl;

		pMainSystem->InputSelect();

		if (GetSelect() == ' ')
		{
			break;
		}

		pBodyItem->SearchEquipmentCode(pBodyItem, m_nEquipmentSlot[GetSelect()], 2);
	}
}