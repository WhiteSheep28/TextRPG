#include <iostream>

#include "MainSystem.h"
#include "Character.h"

using namespace std;

cCharacter::cCharacter()
{
	m_strName = "ĳ����";
	m_nHealth = 0;
	m_nAttack = 0;
	m_nDefense = 0;
	m_nMana = 0;
	m_nHungry = 0;
}

cCharacter::~cCharacter()
{

}

void cCharacter::My_Stats()
{
	cout << "{ " << m_strName << "�� ���� }" << endl;
	cout << "ü�� : " << m_nHealth << endl;
	cout << "���ݷ� : " << m_nAttack << endl;
	cout << "���� : " << m_nDefense << endl;
	cout << "���� : " << m_nMana << endl;
	cout << "����� : " << m_nHungry << endl;
}