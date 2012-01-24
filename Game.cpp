#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include "Game.h"
#include "types.h"

Game::Game() {
	window = new sf::RenderWindow(sf::VideoMode(800, 600, 32), "New Game");
	exit = false;
}

Game::Game(WindowParams params) {
	window = new sf::RenderWindow(sf::VideoMode(params.width, params.height, params.bpp), params.title);
	exit = false;
}

Game::~Game() {

}

void Game::initialize(){}

void Game::run() {
	initialize();
	 while (window->IsOpened()) {
		update();
		render();
	}
}



void Game::update() {

	sf::Event Event;
    while (window->PollEvent(Event))
    {
        // Close window : exit
        if (Event.Type == sf::Event::Closed)
            window->Close();
			
    }
}

void Game::render() {
	window->Display();
}



