#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cDungeonUi : public cMainSystem
{
public:
	cDungeonUi();
	virtual ~cDungeonUi();

	virtual void Dungeon_Start(cMainSystem* pMainSystem, cCharacter* pCharacter, cInventory* pInventory, cEquipment* pEquipment,
		cItem* pItem, cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
		cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon);
	virtual void Random_Monster(cMainSystem* pMainSystem, cCharacter* pCharacter, cInventory* pInventory, cEquipment* pEquipment,
		cItem* pItem, cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
		cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon);
	virtual void Boss_Spawn(cMainSystem* pMainSystem, cCharacter* pCharacter, cInventory* pInventory, cEquipment* pEquipment,
		cItem* pItem, cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
		cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon);
	virtual void DungeonFight(cMainSystem* pMainSystem, cMonster* pMonster, cCharacter* pCharacter, 
		cInventory* pInventory, cEquipment* pEquipment, cItem* pItem, 
		cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem,
		cHead* pHead, cBody* pBody, cLeg* pLeg, cWeapon* pWeapon);

protected:

private:

};