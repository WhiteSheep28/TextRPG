#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cDungeonUi : public cMainSystem
{
public:
	cDungeonUi();
	virtual ~cDungeonUi();

	virtual void Dungeon_Start();
	virtual void Random_Monster();
	virtual void Boss_Spawn();

protected:

private:

};