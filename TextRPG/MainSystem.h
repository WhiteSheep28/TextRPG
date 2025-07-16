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
class cHead;
class cBody;
class cLeg;
class cWeapon;

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
	virtual void Job_Introduce(cCharacter* pCharacter, cEquipment* pEquipment,
		cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem) { ; }
	virtual void Game_Main(cMainSystem* pMainSystem, cCharacter* pCharacter, cEquipment* pEquipment,
		cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem) { ; }

	//DungeonUi
	virtual void Dungeon_Start() { ; }
	virtual void Random_Monster() { ; }
	virtual void Boss_Spawn() { ; }

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
	virtual void Equipment_Ui(cMainSystem* pMainSystem, cEquipment* pEquipment, 
		cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem, 
		cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon) { ; }
	virtual void GetEquipment(cEquipment* pEquipment, 
		cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
		cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon,
		int nEquipmentNum, int nEquipmentSlotNum) { ; }

	//Head
	virtual void Head_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cHeadItem* pHeadItem) { ; }
	virtual void NormalHeadStats(cCharacter* pCharacter) { ; }

	//Body
	virtual void Body_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cBodyItem* pBodyItem) { ; }
	virtual void NormalBodyStats(cCharacter* pCharacter) { ; }

	//Leg
	virtual void Leg_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cLegItem* pLegItem) { ; }
	virtual void NormalLegStats(cCharacter* pCharacter) { ; }

	//Weapon
	virtual void Weapon_Ui(cMainSystem* pMainSystem, cCharacter* pCharacter, cWeaponItem* pWeaponItem) { ; }
	virtual void NormalWeaponStats(cCharacter* pCharacter) { ; }

	//EquipmentItem
	virtual void SearchEquipmentCode(cCharacter* pCharacter, cEquipment* pEquipment, int nEquipmentNum, int nSelectTool) { ; }

	//Character
	virtual void My_Stats(cCharacter* pCharacter, cEquipment* pEquipment,
		cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem) { ; }
	virtual void Skill_Tree() { ; }

protected:
	static char m_nSelect;
	static int m_nDungeonBestRecord;

	//DungeonUi
	int m_nBossCount;
	int m_nRandomMonsterCode;
	int m_nDungeonRecord;

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
	int m_nFullHealth;
	int m_nAttack;
	int m_nFullAttack;
	int m_nDefense;
	int m_nFullDefense;
	int m_nMana;
	int m_nFullMana;
	int m_nHungry;

private:

};