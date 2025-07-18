#include <iostream>

#include "Character.h"
#include "Socerer.h"

using namespace std;

cSocerer::cSocerer()
{
	m_strName = "마법사";
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

cSocerer::~cSocerer()
{

}

void cSocerer::Skill_Tree()
{
	cout << "{ 스킬 }" << endl;
	cout << "1. 에너지 볼트" << endl;
	cout << "2. 썬더 볼트" << endl;
	cout << "3. 파이어 에로우" << endl;
	cout << "Space. 나가기" << endl;
}