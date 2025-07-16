#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cHeadItem : public cMainSystem
{
public:
	cHeadItem();
	virtual ~cHeadItem();

	virtual void SearchEquipmentCode(cCharacter* pCharacter, cHeadItem* pHeadItem, int nEquipmentNum, int nSelectTool);

	virtual void NormalHeadStats(cCharacter* pCharacter);

protected:

private:

};