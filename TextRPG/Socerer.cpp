#include <iostream>

#include "Character.h"
#include "Socerer.h"

using namespace std;

cSocerer::cSocerer()
{
	m_strName = "������";
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
	cout << "{ ��ų }" << endl;
	cout << "1. ������ ��Ʈ" << endl;
	cout << "2. ��� ��Ʈ" << endl;
	cout << "3. ���̾� ���ο�" << endl;
	cout << "Space. ������" << endl;
}