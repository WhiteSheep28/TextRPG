#include <iostream>

#include "MainSystem.h"
#include "Inventory.h"
#include "Item.h"
#include "Character.h"

using namespace std;

#define ItemUi 1
#define UseItem 2
#define GetItem 3
#define DeleteItem 4

cItem::cItem()
{
	m_nMyBread = 10;
	m_nMyHealingPotion = 19;
}

cItem::~cItem()
{

}

void cItem::SearchItemCode(cInventory* pInventory, cCharacter* pCharacter, int nItemNum, int nItemCount, int nSelectTool)
{
	switch (nItemNum)
	{
	case '1':
	case 1:
	{
		if (nSelectTool == ItemUi)
		{
			cout << "빵 : " << m_nMyBread << "개";
		}
		else if (nSelectTool == UseItem)
		{
			m_nMyBread--;
			UseBread(pCharacter);
		}
		else if (nSelectTool == GetItem)
		{
			m_nMyBread += nItemCount;
		}
		else if (nSelectTool == DeleteItem)
		{
			if (m_nMyBread == 0)
			{
				pInventory->m_nInventorySlot[pInventory->m_nInventoryCount] = 0;
			}
		}

		break;
	}
	case '2':
	case 2 :
	{
		if (nSelectTool == ItemUi)
		{
			cout << "체력포션 : " << m_nMyHealingPotion << "개";
		}
		else if (nSelectTool == UseItem)
		{
			m_nMyHealingPotion--;
			UseHealingPotion(pCharacter);
		}
		else if (nSelectTool == GetItem)
		{

		}
		else if (nSelectTool == DeleteItem)
		{
			if (m_nMyHealingPotion == 0)
			{
				pInventory->m_nInventorySlot[pInventory->m_nInventoryCount] = 0;
			}
		}

		break;
	}
	default:
	{
		break;
	}
	}
}

void cItem::UseBread(cCharacter* pCharacter)
{
	pCharacter = (cCharacter*)pCharacter;

	pCharacter->m_nHungry += 100;

	if (pCharacter->m_nHungry >= 100)
	{
		pCharacter->m_nHungry = 100;
	}
}

void cItem::UseHealingPotion(cCharacter* pCharacter)
{
	pCharacter = (cCharacter*)pCharacter;

	pCharacter->m_nHealth += 100;

	if (pCharacter->m_nHealth >= 100)
	{
		pCharacter->m_nHealth = 100;
	}
}