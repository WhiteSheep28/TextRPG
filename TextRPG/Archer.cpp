#include <iostream>

#include "Character.h"
#include "Archer.h"

using namespace std;

cArcher::cArcher()
{
	m_strName = "궁수";
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
	cout << "{ 스킬 }" << endl;
	cout << "1. 일반 공격" << endl;
	cout << "2. 더블 샷" << endl;
	cout << "3. 크리티컬 샷" << endl;
	cout << "4. 에로우 봄" << endl;
	cout << "5. 인벤토리" << endl;
	cout << "6. 장비창" << endl;
	cout << "Space. 나가기" << endl;
}