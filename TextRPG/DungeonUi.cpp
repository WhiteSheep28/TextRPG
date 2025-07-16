#include <iostream>

#include "MainSystem.h"
#include "DungeonUi.h"
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

void cDungeonUi::Dungeon_Start()
{
	Random_Monster();
	Boss_Spawn();
}

void cDungeonUi::Random_Monster()
{
	m_nRandomMonsterCode = rand() % 3;

	switch (m_nRandomMonsterCode)
	{
	case 0:
	{
		
	}
	case 1:
	{

	}
	case 2:
	{

	}
	}
}

void cDungeonUi::Boss_Spawn()
{

}