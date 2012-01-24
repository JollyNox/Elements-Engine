#ifndef TESTGAME_H
#define TESTGAME_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include "Game.h"
#include "types.h"
#include "TextureManager.h"
#include "GameObject.h"

class TestGame : public Game{
public:
	TestGame();
	
	virtual void initialize();
	virtual void update();
	virtual void render();

private:
	TextureManager* textureManager;
	GameObject* test;
};

#endif