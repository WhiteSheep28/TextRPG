#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cMainUi : public cMainSystem
{
public:
	cMainUi();
	virtual ~cMainUi();

	virtual void Game_Start();
	virtual void Job_Select();
	virtual void Job_Introduce(cCharacter* pCharacter, cEquipment* pEquipment,
		cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem);
	virtual void Game_Main(cMainSystem* pMainSystem, cCharacter* pCharacter, cEquipment* pEquipment,
		cHeadItem* pHeadItem, cBodyItem* pBodyItem, cLegItem* pLegItem, cWeaponItem* pWeaponItem);

protected:

private:

};