#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "TestGame.h"

int main()
{
	TestGame* game = new TestGame();

	game->run();

    return EXIT_SUCCESS;
}
