#include <iostream>

#include "MainSystem.h"
#include "Equipment.h"

using namespace std;

cEquipment::cEquipment()
{
	memset(m_nEquipmentSlot, 0, 4 * sizeof(int));
}

cEquipment::~cEquipment()
{

}

void cEquipment::Equipment_Ui()
{
	cout << "창비창이당";
}