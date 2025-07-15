#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cWeaponItem : public cMainSystem
{
public:
	cWeaponItem();
	~cWeaponItem();

	virtual void SearchEquipmentCode(cEquipment* pEquipment, int nEquipmentNum, int nSelectTool);

protected:

private:

};