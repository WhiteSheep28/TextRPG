#pragma once

#include <iostream>

using namespace std;

class cCharacter;
class cInventory;
class cItem;
class cEquipment;
class cBodyItem;
class cHeadItem;
class cLegItem;
class cWeaponItem;

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
	virtual void Job_Introduce(cCharacter* pCharacter) { ; }
	virtual void Game_Main(cCharacter* pCharacter) { ; }

	//DungeonUi
	virtual void Dungeon_Start() { ; }

	//FarmUi
	virtual void Farm_Start() { ; }

	//Inventory
	virtual void Inventory_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cInventory* pInventory, cItem* pItem) { ; }
	virtual void GetItem(cInventory* pInventory, cCharacter* pCharacter, cItem* pItem, int nItemNum, int nItemCount) { ; }
	virtual void InventoryClean(cInventory* pInventory, cCharacter* pCharacter, cItem* pItem, int nItemNum, int nItemCount) { ; }

	//Item
	virtual void SearchItemCode(cInventory* pInventory, cCharacter* pCharacter, int nItemNum, int nItemCount, int nSelectTool) { ; }
	virtual void UseBread(cCharacter* pCharacter) { ; }
	virtual void UseHealingPotion(cCharacter* pCharacter) { ; }

	//Equipment
	virtual void Equipment_Ui(cMainSystem* pMainSystem, cEquipment* pEquipment, cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem) { ; }

	//Head
	virtual void Head_Ui() { ; }

	//Body
	virtual void Body_Ui() { ; }

	//Leg
	virtual void Leg_Ui() { ; }

	//Weapon
	virtual void Weapon_Ui() { ; }

	//EquipmentItem
	virtual void SearchEquipmentCode(cEquipment* pEquipment, int nEquipmentNum, int nSelectTool) { ; }

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
	int m_nEquipmentCount;

	//Character, Monster
	string m_strName;
	int m_nHealth;
	int m_nAttack;
	int m_nDefense;
	int m_nMana;
	int m_nHungry;

private:

};