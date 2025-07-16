#include <iostream>

#include "Monster.h"
#include "Goblin.h"

using namespace std;

cGoblin::cGoblin()
{
	m_strName = "Goblin";
	m_nHealth = 100;
	m_nAttack = 10;
	m_nDefense = 10;
}

cGoblin::~cGoblin()
{

}