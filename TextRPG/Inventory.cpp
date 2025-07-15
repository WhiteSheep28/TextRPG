#include <iostream>

#include "MainSystem.h"
#include "Character.h"
#include "Inventory.h"
#include "Item.h"

#define LastInventorySlot 10

using namespace std;

cInventory::cInventory()
{
	memset(m_nInventorySlot, 0, 10 * sizeof(int));

	m_nInventorySlot[0] = 1;
	m_nInventorySlot[1] = 2;

	m_nInventoryCount = 0;
}

cInventory::~cInventory()
{

}

void cInventory::Inventory_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cInventory* pInventory, cItem* pItem)
{
	while (1)
	{
		system("cls");

		m_nInventoryCount = 0;

		while (m_nInventoryCount < LastInventorySlot)
		{
			cout << m_nInventoryCount << ". ";

			pItem->SearchItemCode(pInventory, pCharacter, m_nInventorySlot[m_nInventoryCount], 0, 1);
			
			cout << endl;

			m_nInventoryCount++;
		}

		cout << "Space. 뒤로가기" << endl;

		pMainSystem->InputSelect();

		if (GetSelect() == ' ')
		{
			break;
		}

		pMainSystem->ChangeInt();

		pItem->SearchItemCode(pInventory, pCharacter, m_nInventorySlot[pMainSystem->GetSelect()], 0, 2);

		InventoryClean(pInventory, pCharacter, pItem, 0, 4);
	}
}

void cInventory::GetItem(cInventory* pInventory, cCharacter* pCharacter, cItem* pItem, int nItemNum, int nItemCount)
{
	m_nInventoryCount = 0;

	while (m_nInventoryCount < LastInventorySlot)
	{
		if (m_nInventoryCount == nItemNum)
		{
			pItem->SearchItemCode(pInventory, pCharacter, nItemNum, nItemCount, 3);
			break;
		}
		else if (m_nInventoryCount == LastInventorySlot - 1 && m_nInventorySlot[m_nInventoryCount] != nItemNum)
		{
			m_nInventoryCount = 0;

			while (m_nInventorySlot[m_nInventoryCount] != 0)
			{
				m_nInventoryCount++;
			}

			m_nInventorySlot[m_nInventoryCount] = nItemNum;

			pItem->SearchItemCode(pInventory, pCharacter, nItemNum, nItemCount, 3);
			
			break;
		}

		m_nInventoryCount++;
	}
}

void cInventory::InventoryClean(cInventory* pInventory, cCharacter* pCharacter, cItem* pItem, int nItemNum, int nItemCount)
{
	int nTempCount = 0;

	m_nInventoryCount = 0;

	while (m_nInventoryCount < LastInventorySlot - 1)
	{
		if (m_nInventorySlot[m_nInventoryCount] != 0)
		{
			pItem->SearchItemCode(pInventory, pCharacter, m_nInventorySlot[m_nInventoryCount], 0, 4);
		}

		m_nInventoryCount++;

		if (m_nInventoryCount > 0)
		{
			nTempCount = m_nInventoryCount;

			while (m_nInventorySlot[m_nInventoryCount - 1] == 0)
			{
				m_nInventorySlot[m_nInventoryCount - 1] = m_nInventorySlot[m_nInventoryCount];
				m_nInventorySlot[m_nInventoryCount] = 0;
				m_nInventoryCount--;
			}

			m_nInventoryCount = nTempCount;
		}
	}
}