#include <iostream>
#include <conio.h>

#include "MainSystem.h"

using namespace std;

char cMainSystem::m_nSelect = 0;
int cMainSystem::m_nDungeonBestRecord = 0;

cMainSystem::cMainSystem()
{

}

cMainSystem::~cMainSystem()
{

}

void cMainSystem::InputSelect()
{
 	m_nSelect = _getch();
}