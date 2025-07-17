#include <iostream>

#include "MainSystem.h"

#include "DungeonUi.h"

#include "Character.h"

#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"
#include "Wolf.h"

using namespace std;

cDungeonUi::cDungeonUi()
{
	m_nBossCount = 1;
	m_nRandomMonsterCode = 0;
	m_nDungeonRecord = 1;
}

cDungeonUi::~cDungeonUi()
{

}

void cDungeonUi::Dungeon_Start(cMainSystem* pMainSystem, cCharacter* pCharacter)
{

	if (m_nBossCount == 10)
	{
		Boss_Spawn(pMainSystem, pCharacter);
	}
	else
	{
		Random_Monster(pMainSystem, pCharacter);
	}
}

void cDungeonUi::Random_Monster(cMainSystem* pMainSystem, cCharacter* pCharacter)
{
	m_nRandomMonsterCode = rand() % 3;

	cMainSystem* pMonster = new cMonster;

	switch (m_nRandomMonsterCode)
	{
	case 0:
	{
		cMainSystem* pGoblin = new cGoblin;
		pMonster = pGoblin;
		
		break;
	}
	case 1:
	{
		cMainSystem* pSlime = new cSlime;
		pMonster = pSlime;

		break;
	}
	case 2:
	{
		cMainSystem* pWolf = new cWolf;
		pMonster = pWolf;

		break;
	}
	}

	DungeonFight(pMainSystem, dynamic_cast<cMonster*>(pMonster), pCharacter);
}

void cDungeonUi::Boss_Spawn(cMainSystem* pMainSystem, cCharacter* pCharacter)
{
	switch (m_nBossCount)
	{
	case 10:
	{

	}
	}
}

void cDungeonUi::DungeonFight(cMainSystem* pMainSystem, cMonster* pMonster, cCharacter* pCharacter)
{
	cout << "{ " << pCharacter->GetName() << " } { " << pMonster->GetName() << " }" << endl;
	cout << "{ " << pCharacter->GetFullHealth() << " } { " << pMonster->Get
}