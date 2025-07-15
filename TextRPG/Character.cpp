#include <iostream>

#include "MainSystem.h"
#include "Character.h"

using namespace std;

cCharacter::cCharacter()
{
	m_strName = "캐릭터";
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
	cout << "{ " << m_strName << "의 정보 }" << endl;
	cout << "체력 : " << m_nHealth << endl;
	cout << "공격력 : " << m_nAttack << endl;
	cout << "방어력 : " << m_nDefense << endl;
	cout << "마나 : " << m_nMana << endl;
	cout << "배고픔 : " << m_nHungry << endl;
}