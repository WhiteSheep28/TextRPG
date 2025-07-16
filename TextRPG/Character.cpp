#include <iostream>

#include "MainSystem.h"
#include "Character.h"
#include "HeadItem.h"
#include "BodyItem.h"
#include "LegItem.h"
#include "WeaponItem.h"
#include "Equipment.h"

using namespace std;

cCharacter::cCharacter()
{
	m_strName = "ĳ����";
	m_nHealth = 0;
	m_nFullHealth = 0;
	m_nAttack = 0;
	m_nFullAttack = 0;
	m_nDefense = 0;
	m_nFullDefense = 0;
	m_nMana = 0;
	m_nFullMana = 0;
	m_nHungry = 0;
}

cCharacter::~cCharacter()
{

}

void cCharacter::My_Stats(cCharacter* pCharacter, cEquipment* pEquipment, 
	cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem)
{
	m_nFullHealth = m_nHealth;
	m_nFullAttack = m_nAttack;
	m_nFullDefense = m_nDefense;
	m_nFullMana = m_nMana;

	pHeadItem->SearchEquipmentCode(pCharacter, pHeadItem, pEquipment->m_nEquipmentSlot[0], 2);
	pBodyItem->SearchEquipmentCode(pCharacter, pBodyItem, pEquipment->m_nEquipmentSlot[1], 2);
	pLegItem->SearchEquipmentCode(pCharacter, pLegItem, pEquipment->m_nEquipmentSlot[2], 2);
	pWeaponItem->SearchEquipmentCode(pCharacter, pWeaponItem, pEquipment->m_nEquipmentSlot[3], 2);


	cout << "{ " << m_strName << "�� ���� }" << endl;
	cout << "ü�� : " << m_nFullHealth << endl;
	cout << "���ݷ� : " << m_nFullAttack << endl;
	cout << "���� : " << m_nFullDefense << endl;
	cout << "���� : " << m_nFullMana << endl;
	cout << "����� : " << m_nHungry << endl;
}