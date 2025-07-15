#pragma once

#include <iostream>

using namespace std;

class cMainSystem
{
public:
	cMainSystem();
	virtual ~cMainSystem();

	void InputSelect();
	static char GetSelect() { return m_nSelect; }
	void ChangeInt() { m_nSelect -= 48; }

	//MainUi
	virtual void Game_Start() { ; }
	virtual void Job_Select() { ; }
	virtual void Job_Introduce(cMainSystem* pCharacter) { ; }
	virtual void Game_Main(cMainSystem* pCharacter) { ; }

	//DungeonUi
	virtual void Dungeon_Start() { ; }

	//FarmUi
	virtual void Farm_Start() { ; }

	//Inventory
	virtual void Inventory_Ui(cMainSystem* pMainSystem, cMainSystem* pCharacter, cMainSystem* pInventory, cMainSystem* pItem) { ; }
	virtual void GetItem(cMainSystem* pInventory, cMainSystem* pCharacter, cMainSystem* pItem, int nItemNum, int nItemCount) { ; }
	virtual void InventoryClean(cMainSystem* pInventory, cMainSystem* pCharacter, cMainSystem* pItem, int nItemNum, int nItemCount) { ; }

	//Item
	virtual void SearchItemCode(cMainSystem* pInventory, cMainSystem* pCharacter, int nItemNum, int nItemCount, int nSelectTool) { ; }
	virtual void UseBread(cMainSystem* pCharacter) { ; }
	virtual void UseHealingPotion(cMainSystem* pCharacter) { ; }

	//Equipment
	virtual void Equipment_Ui() { ; }

	//Character
	virtual void My_Stats() { ; }
	virtual void Skill_Tree() { ; }

protected:
	static char m_nSelect;

	//Inventory
	int m_nInventorySlot[10];
	int m_nInventoryCount;

	//Item
	int m_nMyBread;
	int m_nMyHealingPotion;

	//Equipment
	int m_nEquipmentSlot[4];

	//Character, Monster
	string m_strName;
	int m_nHealth;
	int m_nAttack;
	int m_nDefense;
	int m_nMana;
	int m_nHungry;

private:

	friend class cItem;
};