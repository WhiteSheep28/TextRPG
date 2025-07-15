#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cHead : public cMainSystem
{
public:
	cHead();
	virtual ~cHead();

	virtual void Head_Ui();

protected:
	int m_nEquipmentSlot[10];
	int m_nEquipmentCount;
	
private:

};