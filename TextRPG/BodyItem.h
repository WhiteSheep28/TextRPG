#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cBodyItem : public cMainSystem
{
public:
	cBodyItem();
	virtual ~cBodyItem();

	virtual void SearchEquipmentCode(cCharacter* pCharacter, cBodyItem* pBodyItem, int nEquipmentNum, int nSelectTool);

	virtual void NormalBodyStats(cCharacter* pCharacter);

protected:

private:

	friend class cEquipment;
	friend class cBody;
};