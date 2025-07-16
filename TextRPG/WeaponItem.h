#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cWeaponItem : public cMainSystem
{
public:
	cWeaponItem();
	~cWeaponItem();

	virtual void SearchEquipmentCode(cCharacter* pCharacter, cWeaponItem* pWeaponItem, int nEquipmentNum, int nSelectTool);
	virtual void NormalWeaponStats(cCharacter* pCharacter);

protected:

private:

};