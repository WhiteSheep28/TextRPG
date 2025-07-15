#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cLegItem : public cMainSystem
{
public:
	cLegItem();
	~cLegItem();

	virtual void SearchEquipmentCode(cEquipment* pEquipment, int nEquipmentNum, int nSelectTool);
protected:

private:

};
