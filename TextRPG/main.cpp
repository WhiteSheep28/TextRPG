#include <iostream>

#include "MainSystem.h"

#include "DungeonUi.h"
#include "FarmUi.h"
#include "MainUi.h"

#include "Character.h"
#include "Warrior.h"
#include "Archer.h"
#include "Socerer.h"

#include "Inventory.h"
#include "Item.h"

#include "Equipment.h"
#include "HeadItem.h"
#include "BodyItem.h"
#include "LegItem.h"
#include "WeaponItem.h"

#include "Head.h"
#include "Body.h"
#include "Leg.h"
#include "Weapon.h"

using namespace std;

void main()
{
	cMainSystem* pMainSystem = new cMainSystem;

	cMainSystem* pMainUi = new cMainUi;
	cMainSystem* pDungeonUi = new cDungeonUi;
	cMainSystem* pFarmUi = new cFarmUi;

	cMainSystem* pCharacter = new cCharacter;
	cCharacter* Character = dynamic_cast<cCharacter*>(pCharacter);

	cMainSystem* pInventory = new cInventory;
	cInventory* Inventory = dynamic_cast<cInventory*>(pInventory);

	cMainSystem* pItem = new cItem;
	cItem* Item = dynamic_cast<cItem*>(pItem);

	cMainSystem* pEquipment = new cEquipment;
	cEquipment* Equipment = dynamic_cast<cEquipment*>(pEquipment);

	cMainSystem* pHeadItem = new cHeadItem;
	cHeadItem* HeadItem = dynamic_cast<cHeadItem*>(pHeadItem);
	cMainSystem* pBodyItem = new cBodyItem;
	cBodyItem* BodyItem = dynamic_cast<cBodyItem*>(pBodyItem);
	cMainSystem* pLegItem = new cLegItem;
	cLegItem* LegItem = dynamic_cast<cLegItem*>(pLegItem);
	cMainSystem* pWeaponItem = new cWeaponItem;
	cWeaponItem* WeaponItem = dynamic_cast<cWeaponItem*>(pWeaponItem);

	cMainSystem* pHead = new cHead;
	cHead* Head = dynamic_cast<cHead*>(pHead);
	cMainSystem* pBody = new cBody;
	cBody* Body = dynamic_cast<cBody*>(pBody);
	cMainSystem* pLeg = new cLeg;
	cLeg* Leg = dynamic_cast<cLeg*>(pLeg);
	cMainSystem* pWeapon = new cWeapon;
	cWeapon* Weapon = dynamic_cast<cWeapon*>(pWeapon);

	//게임 시작
	while (1)
	{
		pMainUi->Game_Start();

		pMainSystem->InputSelect();

		if (pMainSystem->GetSelect() == '1')
		{
			break;
		}
		else if (pMainSystem->GetSelect() == ' ')
		{
			delete pMainSystem;
			delete pMainUi;
			delete pDungeonUi;
			delete pFarmUi;
			delete pCharacter;
			delete pInventory;
			delete pEquipment;
			return;
		}
		else
		{
			continue;
		}
	}

	//직업 소개
	while (1)
	{
		pMainUi->Job_Select();

		pMainSystem->InputSelect();

		if (pMainSystem->GetSelect() == '1')
		{
			cWarrior* pWarrior = new cWarrior();

			Character = pWarrior;

			//직업 선택
			while (1)
			{
				pMainUi->Job_Introduce(Character, Equipment, HeadItem, BodyItem, LegItem, WeaponItem);

				pMainSystem->InputSelect();

				if (pMainSystem->GetSelect() == '1')
				{
					break;
				}
				else if (pMainSystem->GetSelect() == ' ')
				{
					delete pWarrior;
					break;
				}
				else
				{
					continue;
				}
			}

			if (pMainSystem->GetSelect() == '1')
			{
				break;
			}
		}
		else if (pMainSystem->GetSelect() == '2')
		{
			cArcher* pArcher = new cArcher();

			Character = pArcher;

			//직업 선택
			while (1)
			{
				pMainUi->Job_Introduce(Character, Equipment, HeadItem, BodyItem, LegItem, WeaponItem);

				pMainSystem->InputSelect();

				if (pMainSystem->GetSelect() == '1')
				{
					break;
				}
				else if (pMainSystem->GetSelect() == ' ')
				{
					delete pArcher;
					break;
				}
				else
				{
					continue;
				}
			}

			if (pMainSystem->GetSelect() == '1')
			{
				break;
			}
		}
		else if (pMainSystem->GetSelect() == '3')
		{
			cSocerer* pSocerer = new cSocerer();

			Character = pSocerer;

			//직업 선택
			while (1)
			{
				pMainUi->Job_Introduce(Character, Equipment, HeadItem, BodyItem, LegItem, WeaponItem);

				pMainSystem->InputSelect();

				if (pMainSystem->GetSelect() == '1')
				{
					break;
				}
				else if (pMainSystem->GetSelect() == ' ')
				{
					delete pSocerer;
					break;
				}
				else
				{
					continue;
				}
			}

			if (pMainSystem->GetSelect() == '1')
			{
				break;
			}
		}
		else
		{
			continue;
		}
	}

	//메인 화면
	while (1)
	{
		pMainUi->Game_Main(pMainSystem, Character, Equipment, HeadItem, BodyItem, LegItem, WeaponItem);

		pMainSystem->InputSelect();

		if (pMainSystem->GetSelect() == '1')
		{
			pDungeonUi->Dungeon_Start(pMainSystem, Character, Inventory, Equipment,
				Item, HeadItem, BodyItem, LegItem, WeaponItem, 
				Head, Body, Leg, Weapon);
		}
		else if (pMainSystem->GetSelect() == '2')
		{
			pFarmUi->Farm_Start();
		}
		else if (pMainSystem->GetSelect() == '3')
		{
            pInventory->Inventory_Ui(pMainSystem, Character, Inventory, Item);
		}
		else if (pMainSystem->GetSelect() == '4')
		{
			pEquipment->Equipment_Ui(pMainSystem, Character, Equipment, HeadItem, BodyItem, LegItem, WeaponItem, Head, Body, Leg, Weapon);
		}
		else if (pMainSystem->GetSelect() == ' ')
		{
			delete pMainSystem;
			delete pMainUi;
			delete pDungeonUi;
			delete pFarmUi;
			delete pCharacter;
			delete pInventory;
			delete pEquipment;
			return;
		}
		else
		{
			continue;
		}
	}
}