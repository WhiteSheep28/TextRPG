#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cHeadItem : public cMainSystem
{
public:
	cHeadItem();
	virtual ~cHeadItem();

	virtual void SearchEquipmentCode(cEquipment* pEquipment, int nEquipmentNum, int nSelectTool);

protected:

private:

};