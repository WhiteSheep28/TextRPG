#include <iostream>

#include "Character.h"
#include "Archer.h"

using namespace std;

cArcher::cArcher()
{
	m_strName = "±Ã¼ö";
	m_nHealth = 100;
	m_nFullHealth = 0;
	m_nAttack = 10;
	m_nFullAttack = 0;
	m_nDefense = 10;
	m_nFullDefense = 0;
	m_nMana = 100;
	m_nFullMana = 0;
	m_nHungry = 100;
}

cArcher::~cArcher()
{

}

void cArcher::Skill_Tree()
{
	cout << "{ ½ºÅ³ }" << endl;
	cout << "1. ´õºí ¼¦" << endl;
	cout << "2. Å©¸®Æ¼ÄÃ ¼¦" << endl;
	cout << "3. ¿¡·Î¿ì º½" << endl;
	cout << "Space. ³ª°¡±â" << endl;
}