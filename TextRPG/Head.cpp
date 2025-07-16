#include <iostream>

#include "MainSystem.h"
#include "Head.h"
#include "HeadItem.h"

using namespace std;

#define LastEquipmentSlot 10

cHead::cHead()
{
	memset(m_nEquipmentSlot, 0, 10 * sizeof(int));
	m_nEquipmentCount = 0;
}

cHead::~cHead()
{

}

void cHead::Head_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cHeadItem* pHeadItem)
{
	while (1)
	{
		system("cls");

		m_nEquipmentCount = 0;

		cout << "{ 투구 인벤토리 }" << endl;

		while (m_nEquipmentCount < LastEquipmentSlot)
		{
			cout << m_nEquipmentCount << ". ";

			pHeadItem->SearchEquipmentCode(pCharacter, pHeadItem, m_nEquipmentSlot[m_nEquipmentCount], 1);

			cout << endl;

			m_nEquipmentCount++;
		}

		cout << "Space. 뒤로가기" << endl;

		pMainSystem->InputSelect();

		if (GetSelect() == ' ')
		{
			break;
		}

		pHeadItem->SearchEquipmentCode(pCharacter, pHeadItem, m_nEquipmentSlot[GetSelect()], 2);
	}
}

void cHead::InventoryClean(cEquipment* pEquipment)
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