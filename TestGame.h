#ifndef TESTGAME_H
#define TESTGAME_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include "Game.h"
#include "types.h"

class TestGame : public Game{
public:
	TestGame();

	virtual void update();

	virtual void render();

};

#endif