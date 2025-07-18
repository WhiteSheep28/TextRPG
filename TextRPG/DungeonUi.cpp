#include <iostream>

#include "MainSystem.h"

#include "DungeonUi.h"

#include "Character.h"

#include "Inventory.h"

#include "Equipment.h"

#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"
#include "Wolf.h"

using namespace std;

cDungeonUi::cDungeonUi()
{
	m_nBossCount = 1;
	m_nRandomMonsterCode = 0;
	m_nDungeonRecord = 1;
}

cDungeonUi::~cDungeonUi()
{

}

void cDungeonUi::Dungeon_Start(cMainSystem* pMainSystem, cCharacter* pCharacter, cInventory* pInventory, 
	cEquipment* pEquipment, cItem* pItem, cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
	cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon)
{

	if (m_nBossCount == 10)
	{
		Boss_Spawn(pMainSystem, pCharacter, pInventory, pEquipment, pItem,
			pHeadItem, pBodyItem, pLegItem, pWeaponItem,
			pHead, pBody, pLeg, pWeapon);
	}
	else
	{
		Random_Monster(pMainSystem, pCharacter, pInventory, pEquipment, pItem,
			pHeadItem, pBodyItem, pLegItem, pWeaponItem,
			pHead, pBody, pLeg, pWeapon);
	}
}

void cDungeonUi::Random_Monster(cMainSystem* pMainSystem, cCharacter* pCharacter, cInventory* pInventory, 
	cEquipment* pEquipment, cItem* pItem, cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
	cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon)
{
	m_nRandomMonsterCode = rand() % 3;

	cMainSystem* pMonster = new cMonster;

	switch (m_nRandomMonsterCode)
	{
	case 0:
	{
		cMainSystem* pGoblin = new cGoblin;
		pMonster = pGoblin;
		
		break;
	}
	case 1:
	{
		cMainSystem* pSlime = new cSlime;
		pMonster = pSlime;

		break;
	}
	case 2:
	{
		cMainSystem* pWolf = new cWolf;
		pMonster = pWolf;

		break;
	}
	}

	DungeonFight(pMainSystem, dynamic_cast<cMonster*>(pMonster), pCharacter, pInventory, pEquipment, pItem,
		pHeadItem, pBodyItem, pLegItem, pWeaponItem, 
		pHead, pBody, pLeg, pWeapon);
}

void cDungeonUi::Boss_Spawn(cMainSystem* pMainSystem, cCharacter* pCharacter, cInventory* pInventory, 
	cEquipment* pEquipment, cItem* pItem, cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
	cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon)
{
	switch (m_nBossCount)
	{
	case 10:
	{

	}
	}
}

void cDungeonUi::DungeonFight(cMainSystem* pMainSystem, cMonster* pMonster, cCharacter* pCharacter, 
	cInventory* pInventory, cEquipment* pEquipment, cItem* pItem,
	cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
	cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon)
{
	while (1)
	{
		system("cls");

		cout << m_nDungeonRecord << "층" << endl;
		cout << "{ " << pCharacter->GetName() << " }         { " << pMonster->GetName() << " }" << endl;
		cout << "{ 체력 : " << pCharacter->GetFullHealth() << " }   { 체력 : " << pMonster->GetHealth() << " }" << endl;
		cout << "{ 방어력 : " << pCharacter->GetFullDefense() << " }  { 방어력 : " << pMonster->GetDefense() << " }" << endl;
		cout << "{ 공격력 : " << pCharacter->GetFullAttack() << " } { 공격력 : " << pMonster->GetAttack() << " }" << endl;
		cout << "{ 마나 : " << pCharacter->GetFullMana() << " }" << endl;
		cout << "{ 선택지 }" << endl;
		cout << "1. 일반 공격" << endl;
		cout << "2. 스킬창" << endl;
		cout << "3. 인벤토리" << endl;
		cout << "4. 장비창" << endl;
		cout << "Space. 던전 나가기" << endl;

		pMainSystem->InputSelect();

		switch (pMainSystem->GetSelect())
		{
		case '1':
		case 1:
		{

			break;
		}
		case '2':
		case 2:
		{
			pCharacter->Skill_Tree();

			break;
		}
		case '3':
		case 3:
		{
			pInventory->Inventory_Ui(pMainSystem, pCharacter, pInventory, pItem);

			break;
		}
		case '4':
		case 4:
		{
			pEquipment->Equipment_Ui(pMainSystem, pCharacter, pEquipment,
				pHeadItem, pBodyItem, pLegItem, pWeaponItem,
				pHead, pBody, pLeg, pWeapon);

			break;
		}
		case ' ':
		{
			return;
		}
		}
	}
}