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

void cBody::Body_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cBodyItem* pBodyItem)
{
	while (1)
	{
		system("cls");

		m_nEquipmentCount = 0;

		cout << "{ °©¿Ê ÀÎº¥Åä¸® }" << endl;

		while (m_nEquipmentCount < LastEquipmentSlot)
		{
			cout << m_nEquipmentCount << ". ";

			pBodyItem->SearchEquipmentCode(pCharacter, pBodyItem, m_nEquipmentSlot[m_nEquipmentCount], 1);

			cout << endl;

			m_nEquipmentCount++;
		}

		cout << "Space. µÚ·Î°¡±â" << endl;

		pMainSystem->InputSelect();

		if (GetSelect() == ' ')
		{
			break;
		}

		pBodyItem->SearchEquipmentCode(pCharacter, pBodyItem, m_nEquipmentSlot[GetSelect()], 2);
	}
}

void cBody::InventoryClean(cEquipment * pEquipment)
{
	int nTempCount = 0;

	m_nEquipmentCount = 1;

	nTempCount = m_nEquipmentCount;

	if (m_nEquipmentSlot[0] == 0)
	{
		while (m_nEquipmentSlot[m_nEquipmentCount] != 0)
		{
			m_nEquipmentCount++;
		}

		while (m_nEquipmentSlot[0] != 0)
		{
			m_nEquipmentSlot[m_nEquipmentCount - 1] = m_nEquipmentSlot[m_nEquipmentCount];
			m_nEquipmentSlot[m_nEquipmentCount] = 0;
			m_nEquipmentCount--;
		}
	}

	m_nEquipmentCount = nTempCount;

	while (m_nEquipmentCount < LastEquipmentSlot)
	{
		while (m_nEquipmentSlot[m_nEquipmentCount] != 0 && m_nEquipmentSlot[m_nEquipmentCount - 1] == 0)
		{
			m_nEquipmentSlot[m_nEquipmentCount - 1] = m_nEquipmentSlot[m_nEquipmentCount];
			m_nEquipmentSlot[m_nEquipmentCount] = 0;
			m_nEquipmentCount--;
		}

		m_nEquipmentCount++;
	}
}