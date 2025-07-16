#include <iostream>

#include "MainSystem.h"
#include "Leg.h"
#include "LegItem.h"

using namespace std;

#define LastEquipmentSlot 10

cLeg::cLeg()
{
	memset(m_nEquipmentSlot, 0, 10 * sizeof(int));
	m_nEquipmentCount = 0;
}

cLeg::~cLeg()
{

}

void cLeg::Leg_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cLegItem* pLegItem)
{
	while (1)
	{
		system("cls");

		m_nEquipmentCount = 0;

		cout << "{ 바지 인벤토리 }" << endl;

		while (m_nEquipmentCount < LastEquipmentSlot)
		{
			cout << m_nEquipmentCount << ". ";

			pLegItem->SearchEquipmentCode(pCharacter, pLegItem, m_nEquipmentSlot[m_nEquipmentCount], 1);

			cout << endl;

			m_nEquipmentCount++;
		}

		cout << "Space. 뒤로가기" << endl;

		pMainSystem->InputSelect();

		if (GetSelect() == ' ')
		{
			break;
		}

		pLegItem->SearchEquipmentCode(pCharacter, pLegItem, m_nEquipmentSlot[GetSelect()], 2);
	}
}

void cLeg::InventoryClean(cEquipment* pEquipment)
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