#include <iostream>

#include "Character.h"
#include "Archer.h"

using namespace std;

cArcher::cArcher()
{
	m_strName = "�ü�";
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
	cout << "{ ��ų }" << endl;
	cout << "1. �Ϲ� ����" << endl;
	cout << "2. ���� ��" << endl;
	cout << "3. ũ��Ƽ�� ��" << endl;
	cout << "4. ���ο� ��" << endl;
	cout << "5. �κ��丮" << endl;
	cout << "6. ���â" << endl;
	cout << "Space. ������" << endl;
}