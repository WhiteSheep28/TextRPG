#include <iostream>

#include "Character.h"
#include "Warrior.h"

using namespace std;

cWarrior::cWarrior()
{
	m_strName = "전사";
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

cWarrior::~cWarrior()
{

}

void cWarrior::Skill_Tree()
{
	cout << "{ 스킬 }" << endl;
	cout << "1. 파이어 스트라이크" << endl;
	cout << "2. 슬래시 블러스트" << endl;
	cout << "3. 슬래시 블러스트" << endl;
	cout << "Space. 나가기" << endl;
}