#include <iostream>

#include "Character.h"
#include "Warrior.h"

using namespace std;

cWarrior::cWarrior()
{
	m_strName = "����";
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
	cout << "{ ��ų }" << endl;
	cout << "1. �Ϲ� ����" << endl;
	cout << "2. ���̾� ��Ʈ����ũ" << endl;
	cout << "3. ������ ����Ʈ" << endl;
	cout << "4. ������ ����Ʈ" << endl;
	cout << "5. �κ��丮" << endl;
	cout << "6. ���â" << endl;
	cout << "Space. ������" << endl;
}