#include <iostream>

#include "Monster.h"
#include "Wolf.h"

using namespace std;

cWolf::cWolf()
{
	m_strName = "Wolf";
	m_nHealth = 100;
	m_nAttack = 10;
	m_nDefense = 10;
}

cWolf::~cWolf()
{

}