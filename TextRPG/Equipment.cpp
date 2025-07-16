#include <iostream>

#include "MainSystem.h"

#include "Equipment.h"

#include "HeadItem.h"
#include "BodyItem.h"
#include "LegItem.h"
#include "WeaponItem.h"

#include "Head.h"
#include "Body.h"
#include "Leg.h"
#include "Weapon.h"

#define LastEquipmentSlot 10

using namespace std;

cEquipment::cEquipment()
{
	memset(m_nEquipmentSlot, 0, 4 * sizeof(int));
	
	m_nEquipmentSlot[0] = 1;
	m_nEquipmentSlot[1] = 1;
	m_nEquipmentSlot[2] = 1;
	m_nEquipmentSlot[3] = 1;

	m_nEquipmentCount = 0;

}

cEquipment::~cEquipment()
{

}

void cEquipment::Equipment_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cEquipment* pEquipment,
cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon)
{
	while (1)
	{
		system("cls");

		m_nEquipmentCount = 0;

		cout << "{ ÀåºñÃ¢ }" << endl;

		cout << "¸Ó¸®. ";
		pHeadItem->SearchEquipmentCode(pCharacter, pHeadItem, m_nEquipmentSlot[0], 1);
		cout << endl;

		cout << "°©¿Ê. ";
		pBodyItem->SearchEquipmentCode(pCharacter, pBodyItem, m_nEquipmentSlot[1], 1);
		cout << endl;

		cout << "¹ÙÁö. ";
		pLegItem->SearchEquipmentCode(pCharacter, pLegItem, m_nEquipmentSlot[2], 1);
		cout << endl;

		cout << "¹«±â. ";
		pWeaponItem->SearchEquipmentCode(pCharacter, pWeaponItem, m_nEquipmentSlot[3], 1);
		cout << endl;

		cout << "{ ¼±ÅÃÁö }" << endl;
		cout << "1. ¸Ó¸® °©¿Ê" << endl;
		cout << "2. °©¿Ê °©¿Ê" << endl;
		cout << "3. ´Ù¸® °©¿Ê" << endl;
		cout << "4. ¹«±â" << endl;
		cout << "Space. µÚ·Î°¡±â" << endl;

		pMainSystem->InputSelect();

		if (pMainSystem->GetSelect() == '1')
		{
			pHead->Head_Ui(pMainSystem, pCharacter, pHeadItem);
		}
		else if (pMainSystem->GetSelect() == '2')
		{
			pBody->Body_Ui(pMainSystem, pCharacter, pBodyItem);
		}
		else if (pMainSystem->GetSelect() == '3')
		{
			pLeg->Leg_Ui(pMainSystem, pCharacter, pLegItem);
		}
		else if (pMainSystem->GetSelect() == '4')
		{
			pWeapon->Weapon_Ui(pMainSystem, pCharacter, pWeaponItem);
		}
		else if (pMainSystem->GetSelect() == ' ')
		{
			break;
		}
		else
		{
			continue;
		}
	}
}

void cEquipment::GetEquipment(cEquipment* pEquipment, 
	cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
	cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon,
	int nEquipmentNum, int nEquipmentSlotNum)
{
	pEquipment->m_nEquipmentCount = 0;

	switch (nEquipmentNum)
	{
	case '0':
	case 0:
	{
		while (pEquipment->m_nEquipmentCount < LastEquipmentSlot)
		{
			if (pHead->m_nEquipmentSlot[m_nEquipmentCount] == 0)
			{
				pHead->m_nEquipmentSlot[m_nEquipmentCount] = nEquipmentNum;
			}

			m_nEquipmentCount++;
		}

		if (m_nEquipmentCount >= LastEquipmentSlot)
		{
			cout << "Åõ±¸ ÀåºñÃ¢ÀÌ ²Ë Ã¡½À´Ï´Ù!" << endl;
		}

		break;
	}
	case '1':
	case 1:
	{
		while (pEquipment->m_nEquipmentCount < LastEquipmentSlot)
		{
			if (pBody->m_nEquipmentSlot[m_nEquipmentCount] == 0)
			{
				pBody->m_nEquipmentSlot[m_nEquipmentCount] = nEquipmentNum;
			}

			m_nEquipmentCount++;
		}

		if (m_nEquipmentCount >= LastEquipmentSlot)
		{
			cout << "°©¿Ê ÀåºñÃ¢ÀÌ ²Ë Ã¡½À´Ï´Ù!" << endl;
		}

		break;
	}
	case '2':
	case 2:
	{
		while (pEquipment->m_nEquipmentCount < LastEquipmentSlot)
		{
			if (pLeg->m_nEquipmentSlot[m_nEquipmentCount] == 0)
			{
				pLeg->m_nEquipmentSlot[m_nEquipmentCount] = nEquipmentNum;
			}

			m_nEquipmentCount++;
		}

		if (m_nEquipmentCount >= LastEquipmentSlot)
		{
			cout << "¹ÙÁö ÀåºñÃ¢ÀÌ ²Ë Ã¡½À´Ï´Ù!" << endl;
		}

		break;
	}
	case '3':
	case 3:
	{
		while (pEquipment->m_nEquipmentCount < LastEquipmentSlot)
		{
			if (pWeapon->m_nEquipmentSlot[m_nEquipmentCount] == 0)
			{
				pWeapon->m_nEquipmentSlot[m_nEquipmentCount] = nEquipmentNum;
			}

			m_nEquipmentCount++;
		}

		if (m_nEquipmentCount >= LastEquipmentSlot)
		{
			cout << "¹«±â ÀåºñÃ¢ÀÌ ²Ë Ã¡½À´Ï´Ù!" << endl;
		}

		break;
	}
	}
}