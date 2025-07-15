#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cLeg : public cMainSystem
{
public:
	cLeg();
	virtual ~cLeg();

	virtual void Leg_Ui();

protected:
	int m_nEquipmentSlot[10];
	int m_nEquipmentCount;

private:

};