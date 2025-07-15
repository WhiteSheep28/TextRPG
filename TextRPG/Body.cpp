#include <iostream>

#include "MainSystem.h"
#include "Equipment.h"
#include "Body.h"

#define LastEquipmentSlot 10

using namespace std;

cBody::cBody()
{

}

cBody::~cBody()
{

}

void cBody::Body_Ui()
{
	while (1)
	{
		system("cls");

		m_nEquipmentCount = 0;

		cout << "{ °©¿Ê ÀÎº¥Åä¸® }" << endl;

		while (m_nEquipmentCount < LastEquipmentSlot)
		{
			cout << m_nEquipmentCount << ". ";


		}
	}
}