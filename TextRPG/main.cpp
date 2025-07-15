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

using namespace std;

void main()
{
	cMainSystem* pMainSystem = new cMainSystem;

	cMainSystem* pMainUi = new cMainUi;
	cMainSystem* pDungeonUi = new cDungeonUi;
	cMainSystem* pFarmUi = new cFarmUi;

	cMainSystem* pCharacter = new cCharacter;

	cMainSystem* pInventory = new cInventory;

	cMainSystem* pItem = new cItem;

	cMainSystem* pEquipment = new cEquipment;

	cMainSystem* pHeadItem = new cHeadItem;
	cMainSystem* pBodyItem = new cBodyItem;
	cMainSystem* pLegItem = new cLegItem;
	cMainSystem* pWeaponItem = new cWeaponItem;

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
			cMainSystem* pWarrior = new cWarrior();

			pCharacter = pWarrior;

			//직업 선택
			while (1)
			{
				pMainUi->Job_Introduce(dynamic_cast<cCharacter*>(pCharacter));

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
			cMainSystem* pArcher = new cArcher();

			pCharacter = pArcher;

			//직업 선택
			while (1)
			{
				pMainUi->Job_Introduce(dynamic_cast<cCharacter*>(pCharacter));

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
			cMainSystem* pSocerer = new cSocerer();

			pCharacter = pSocerer;

			//직업 선택
			while (1)
			{
				pMainUi->Job_Introduce(dynamic_cast<cCharacter*>(pCharacter));

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
		pMainUi->Game_Main(dynamic_cast<cCharacter*>(pCharacter));

		pMainSystem->InputSelect();

		if (pMainSystem->GetSelect() == '1')
		{
			pDungeonUi->Dungeon_Start();
		}
		else if (pMainSystem->GetSelect() == '2')
		{
			pFarmUi->Farm_Start();
		}
		else if (pMainSystem->GetSelect() == '3')
		{
            pInventory->Inventory_Ui(pMainSystem, dynamic_cast<cCharacter*>(pCharacter), dynamic_cast<cInventory*>(pInventory), dynamic_cast<cItem*>(pItem));
		}
		else if (pMainSystem->GetSelect() == '4')
		{
			pEquipment->Equipment_Ui(pMainSystem, dynamic_cast<cEquipment*>(pEquipment), dynamic_cast<cHeadItem*>(pHeadItem), dynamic_cast<cBodyItem*>(pBodyItem), dynamic_cast<cLegItem*>(pLegItem), dynamic_cast<cWeaponItem*>(pWeaponItem));
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