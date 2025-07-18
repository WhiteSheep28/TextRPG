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

		cout << m_nDungeonRecord << "��" << endl;
		cout << "{ " << pCharacter->GetName() << " }         { " << pMonster->GetName() << " }" << endl;
		cout << "{ ü�� : " << pCharacter->GetFullHealth() << " }   { ü�� : " << pMonster->GetHealth() << " }" << endl;
		cout << "{ ���� : " << pCharacter->GetFullDefense() << " }  { ���� : " << pMonster->GetDefense() << " }" << endl;
		cout << "{ ���ݷ� : " << pCharacter->GetFullAttack() << " } { ���ݷ� : " << pMonster->GetAttack() << " }" << endl;
		cout << "{ ���� : " << pCharacter->GetFullMana() << " }" << endl;
		cout << "{ ������ }" << endl;
		cout << "1. �Ϲ� ����" << endl;
		cout << "2. ��ųâ" << endl;
		cout << "3. �κ��丮" << endl;
		cout << "4. ���â" << endl;
		cout << "Space. ���� ������" << endl;

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