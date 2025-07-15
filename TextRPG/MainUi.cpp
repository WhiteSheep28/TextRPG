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
	cout << "1. 게임 시작하기" << endl;
	cout << "Space. 게임 나가기" << endl;
}

void cMainUi::Job_Select()
{
	system("cls");
	cout << "{ 직업 선택 }" << endl;
	cout << "1. 전사" << endl;
	cout << "2. 궁수" << endl;
	cout << "3. 마법사" << endl;
}

void cMainUi::Job_Introduce(cMainSystem* pCharacter)
{
	system("cls");

	pCharacter->My_Stats();

	cout << "{ 선택지 }" << endl;
	cout << "1. 계속하기" << endl;
	cout << "Space. 뒤로가기" << endl;
}

void cMainUi::Game_Main(cMainSystem* pCharacter)
{
	system("cls");
	pCharacter->My_Stats();

	cout << "{ 장비창 }" << endl;

	cout << "{ 최고 던전 탐사 기록 }" << endl;
	
	cout << "{ 선택지 }" << endl;
	cout << "1. 던전" << endl;
	cout << "2. 농장" << endl;
	cout << "3. 인벤토리" << endl;
	cout << "4. 장비창" << endl;
	cout << "Space. 나가기" << endl;
}




