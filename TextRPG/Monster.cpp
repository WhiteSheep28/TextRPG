#include <iostream>

#include "MainSystem.h"
#include "Monster.h"

using namespace std;

cMonster::cMonster()
{
	m_strName = "Monster";
	m_nHealth = 0;
	m_nFullHealth = 0;
	m_nAttack = 0;
	m_nFullAttack = 0;
	m_nDefense = 0;
	m_nFullDefense = 0;
}

cMonster::~cMonster()
{

}