#include <iostream>

#include "Character.h"
#include "Socerer.h"

using namespace std;

cSocerer::cSocerer()
{
	m_strName = "������";
	m_nHealth = 100;
	m_nAttack = 10;
	m_nDefense = 10;
	m_nMana = 100;
	m_nHungry = 100;
}

cSocerer::~cSocerer()
{

}

void cSocerer::Skill_Tree()
{
	cout << "{ ��ų }" << endl;
	cout << "1. �Ϲ� ����" << endl;
	cout << "2. ������ ��Ʈ" << endl;
	cout << "3. ��� ��Ʈ" << endl;
	cout << "4. ���̾� ���ο�" << endl;
	cout << "5. �κ��丮" << endl;
	cout << "6. ���â" << endl;
	cout << "Space. ������" << endl;
}