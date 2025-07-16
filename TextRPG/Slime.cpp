#include <iostream>

#include "Monster.h"
#include "Slime.h"

using namespace std;

cSlime::cSlime()
{
	m_strName = "Slime";
	m_nHealth = 100;
	m_nAttack = 10;
	m_nDefense = 10;
}

cSlime::~cSlime()
{

}