#include <iostream>

#include "MainSystem.h"
#include "MainUi.h"

using namespace std;

cMainUi::cMainUi()
{

}

cMainUi::~cMainUi()
{

}

void cMainUi::Game_Start()
{
	system("cls");
	cout << "{ Text RPG }" << endl;
	cout << "1. ���� �����ϱ�" << endl;
	cout << "Space. ���� ������" << endl;
}

void cMainUi::Job_Select()
{
	system("cls");
	cout << "{ ���� ���� }" << endl;
	cout << "1. ����" << endl;
	cout << "2. �ü�" << endl;
	cout << "3. ������" << endl;
}

void cMainUi::Job_Introduce(cMainSystem* pCharacter)
{
	system("cls");

	pCharacter->My_Stats();

	cout << "{ ������ }" << endl;
	cout << "1. ����ϱ�" << endl;
	cout << "Space. �ڷΰ���" << endl;
}

void cMainUi::Game_Main(cMainSystem* pCharacter)
{
	system("cls");
	pCharacter->My_Stats();

	cout << "{ ���â }" << endl;

	cout << "{ �ְ� ���� Ž�� ��� }" << endl;
	
	cout << "{ ������ }" << endl;
	cout << "1. ����" << endl;
	cout << "2. ����" << endl;
	cout << "3. �κ��丮" << endl;
	cout << "4. ���â" << endl;
	cout << "Space. ������" << endl;
}




