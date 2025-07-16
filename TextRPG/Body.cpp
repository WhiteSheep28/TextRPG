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

		cout << "{ ���� �κ��丮 }" << endl;

		while (m_nEquipmentCount < LastEquipmentSlot)
		{
			cout << m_nEquipmentCount << ". ";

			pBodyItem->SearchEquipmentCode(pBodyItem, m_nEquipmentSlot[m_nEquipmentCount], 1);

			cout << endl;

			m_nEquipmentCount++;
		}

		cout << "Space. �ڷΰ���" << endl;

		pMainSystem->InputSelect();

		if (GetSelect() == ' ')
		{
			break;
		}

		pBodyItem->SearchEquipmentCode(pBodyItem, m_nEquipmentSlot[GetSelect()], 2);
	}
}