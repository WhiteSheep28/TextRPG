#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cLegItem : public cMainSystem
{
public:
	cLegItem();
	~cLegItem();

	virtual void SearchEquipmentCode(cCharacter* pCharacter, cLegItem* pLegItem, int nEquipmentNum, int nSelectTool);
	virtual void NormalLegStats(cCharacter* pCharacter);

protected:

private:

};
