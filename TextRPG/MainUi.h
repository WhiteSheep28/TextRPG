#pragma once

#include <iostream>

#include "MainSystem.h"

using namespace std;

class cMainUi : public cMainSystem
{
public:
	cMainUi();
	virtual ~cMainUi();

	virtual void Game_Start();
	virtual void Job_Select();
	virtual void Job_Introduce(cMainSystem* pCharacter);
	virtual void Game_Main(cMainSystem* pCharacter);

protected:

private:

};