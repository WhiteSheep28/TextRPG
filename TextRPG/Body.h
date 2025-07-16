#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cBody : public cMainSystem
{
public:
	cBody();
	virtual ~cBody();

	virtual void Body_Ui(cMainSystem* pMainSystem, cBodyItem* pBodyItem);

protected:
	int m_nEquipmentSlot[10];
	int m_nEquipmentCount;

private:

};
