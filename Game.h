#ifndef GAME_H
#define GAME_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include "types.h"

class Game{
public:
	Game();
	Game(WindowParams params);
	
	~Game();
	void run();
	virtual void update();
	virtual void render();
		
private:
	sf::RenderWindow* window;
	WindowParams windowParams;
	bool exit;
};

#endif