#include <iostream>

#include "MainSystem.h"
#include "Equipment.h"
#include "HeadItem.h"
#include "BodyItem.h"
#include "LegItem.h"
#include "WeaponItem.h"
#include "Body.h"

#define LastEquipmentSlot 4

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

void cEquipment::Equipment_Ui(cMainSystem* pMainSystem, cEquipment* pEquipment, 
cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon)
{
	while (1)
	{
		system("cls");

		m_nEquipmentCount = 0;

		cout << "{ ÀåºñÃ¢ }" << endl;

		cout << "¸Ó¸®. ";
		pHeadItem->SearchEquipmentCode(pEquipment, m_nEquipmentSlot[0], 1);
		cout << endl;

		cout << "°©¿Ê. ";
		pBodyItem->SearchEquipmentCode(pBodyItem, m_nEquipmentSlot[1], 1);
		cout << endl;

		cout << "¹ÙÁö. ";
		pLegItem->SearchEquipmentCode(pEquipment, m_nEquipmentSlot[2], 1);
		cout << endl;

		cout << "¹«±â. ";
		pWeaponItem->SearchEquipmentCode(pEquipment, m_nEquipmentSlot[3], 1);
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
			pHeadItem->Head_Ui();
		}
		else if (pMainSystem->GetSelect() == '2')
		{
			pBody->Body_Ui(pMainSystem, pBodyItem);
		}
		else if (pMainSystem->GetSelect() == '3')
		{
			pLegItem->Leg_Ui();
		}
		else if (pMainSystem->GetSelect() == '4')
		{
			pWeaponItem->Weapon_Ui();
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