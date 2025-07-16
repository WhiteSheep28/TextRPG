#include <iostream>

#include "MainSystem.h"
#include "MainUi.h"
#include "Character.h"
#include "HeadItem.h"
#include "BodyItem.h"
#include "LegItem.h"
#include "WeaponItem.h"
#include "Equipment.h"

using namespace std;

cMainUi::cMainUi()
{

}

cMainUi::~cMainUi()
{

}

void cMainUi::Game_Start()
{
	system("cls");
	cout << "{ Text RPG }" << endl;
	cout << "1. ���� �����ϱ�" << endl;
	cout << "Space. ���� ������" << endl;
}

void cMainUi::Job_Select()
{
	system("cls");
	cout << "{ ���� ���� }" << endl;
	cout << "1. ����" << endl;
	cout << "2. �ü�" << endl;
	cout << "3. ������" << endl;
}

void cMainUi::Job_Introduce(cCharacter* pCharacter, cEquipment* pEquipment,
	cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem)
{
	system("cls");

	pCharacter->My_Stats(pCharacter, pEquipment, pHeadItem, pBodyItem, pLegItem, pWeaponItem);

	cout << "{ ������ }" << endl;
	cout << "1. ����ϱ�" << endl;
	cout << "Space. �ڷΰ���" << endl;
}

void cMainUi::Game_Main(cMainSystem* pMainSystem, cCharacter* pCharacter, cEquipment* pEquipment,
	cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem)
{
	system("cls");
	pCharacter->My_Stats(pCharacter, pEquipment, pHeadItem, pBodyItem, pLegItem, pWeaponItem);

	cout << "{ ���â }" << endl;

	pHeadItem->SearchEquipmentCode(pCharacter, pHeadItem, pEquipment->m_nEquipmentSlot[0], 1);
	cout << endl;

	pBodyItem->SearchEquipmentCode(pCharacter, pBodyItem, pEquipment->m_nEquipmentSlot[1], 1);
	cout << endl;

	pLegItem->SearchEquipmentCode(pCharacter, pLegItem, pEquipment->m_nEquipmentSlot[2], 1);
	cout << endl;

	pWeaponItem->SearchEquipmentCode(pCharacter, pWeaponItem, pEquipment->m_nEquipmentSlot[3], 1);
	cout << endl;

	cout << "{ �ְ� ���� Ž�� ��� }" << endl;

	cout << pMainSystem->m_nDungeonBestRecord;
	cout << "��" << endl;

	cout << "{ ������ }" << endl;
	cout << "1. ����" << endl;
	cout << "2. ����" << endl;
	cout << "3. �κ��丮" << endl;
	cout << "4. ���â" << endl;
	cout << "Space. ������" << endl;
}




