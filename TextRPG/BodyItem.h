#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cBodyItem : public cMainSystem
{
public:
	cBodyItem();
	virtual ~cBodyItem();

	virtual void SearchEquipmentCode(cEquipment* pEquipment, int nEquipmentNum, int nSelectTool);

protected:

private:

	friend class cEquipment;
};