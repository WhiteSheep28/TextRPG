#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cDungeonUi : public cMainSystem
{
public:
	cDungeonUi();
	virtual ~cDungeonUi();

	virtual void Dungeon_Start(cMainSystem* pMainSystem, cCharacter* pCharacter);
	virtual void Random_Monster(cMainSystem* pMainSystem, cCharacter* pCharacter);
	virtual void Boss_Spawn(cMainSystem* pMainSystem, cCharacter* pCharacter);
	virtual void DungeonFight(cMainSystem* pMainSystem, cMonster* pMonster, cCharacter* pCharacter);

protected:

private:

};