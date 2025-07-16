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
	cout << "1. 게임 시작하기" << endl;
	cout << "Space. 게임 나가기" << endl;
}

void cMainUi::Job_Select()
{
	system("cls");
	cout << "{ 직업 선택 }" << endl;
	cout << "1. 전사" << endl;
	cout << "2. 궁수" << endl;
	cout << "3. 마법사" << endl;
}

void cMainUi::Job_Introduce(cCharacter* pCharacter, cEquipment* pEquipment,
	cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem)
{
	system("cls");

	pCharacter->My_Stats(pCharacter, pEquipment, pHeadItem, pBodyItem, pLegItem, pWeaponItem);

	cout << "{ 선택지 }" << endl;
	cout << "1. 계속하기" << endl;
	cout << "Space. 뒤로가기" << endl;
}

void cMainUi::Game_Main(cMainSystem* pMainSystem, cCharacter* pCharacter, cEquipment* pEquipment,
	cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem)
{
	system("cls");
	pCharacter->My_Stats(pCharacter, pEquipment, pHeadItem, pBodyItem, pLegItem, pWeaponItem);

	cout << "{ 장비창 }" << endl;

	pHeadItem->SearchEquipmentCode(pCharacter, pHeadItem, pEquipment->m_nEquipmentSlot[0], 1);
	cout << endl;

	pBodyItem->SearchEquipmentCode(pCharacter, pBodyItem, pEquipment->m_nEquipmentSlot[1], 1);
	cout << endl;

	pLegItem->SearchEquipmentCode(pCharacter, pLegItem, pEquipment->m_nEquipmentSlot[2], 1);
	cout << endl;

	pWeaponItem->SearchEquipmentCode(pCharacter, pWeaponItem, pEquipment->m_nEquipmentSlot[3], 1);
	cout << endl;

	cout << "{ 최고 던전 탐사 기록 }" << endl;

	cout << pMainSystem->m_nDungeonBestRecord;
	cout << "층" << endl;

	cout << "{ 선택지 }" << endl;
	cout << "1. 던전" << endl;
	cout << "2. 농장" << endl;
	cout << "3. 인벤토리" << endl;
	cout << "4. 장비창" << endl;
	cout << "Space. 나가기" << endl;
}




