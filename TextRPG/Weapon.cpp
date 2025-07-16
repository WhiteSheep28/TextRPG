#include <iostream>

#include "MainSystem.h"
#include "Weapon.h"
#include "WeaponItem.h"

using namespace std;

#define LastEquipmentSlot 10

cWeapon::cWeapon()
{
	memset(m_nEquipmentSlot, 0, 10 * sizeof(int));
	m_nEquipmentCount = 0;
}

cWeapon::~cWeapon()
{

}

void cWeapon::Weapon_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cWeaponItem* pWeaponItem)
{
	while (1)
	{
		system("cls");

		m_nEquipmentCount = 0;

		cout << "{ 무기 인벤토리 }" << endl;

		while (m_nEquipmentCount < LastEquipmentSlot)
		{
			cout << m_nEquipmentCount << ". ";

			pWeaponItem->SearchEquipmentCode(pCharacter, pWeaponItem, m_nEquipmentSlot[m_nEquipmentCount], 1);

			cout << endl;

			m_nEquipmentCount++;
		}

		cout << "Space. 뒤로가기" << endl;

		pMainSystem->InputSelect();

		if (GetSelect() == ' ')
		{
			break;
		}

		pWeaponItem->SearchEquipmentCode(pCharacter, pWeaponItem, m_nEquipmentSlot[GetSelect()], 2);
	}
}

void cWeapon::InventoryClean(cEquipment* pEquipment)
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