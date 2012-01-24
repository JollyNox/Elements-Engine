#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include "TestGame.h"
#include "Game.h"
#include "types.h"
#include "GameObject.h"
#include <iostream>
#include <string>


TestGame::TestGame() : Game() {}
	
void TestGame::initialize(){
	Game::initialize();
	textureManager = new TextureManager();

	textureManager->getResource("Content/test.bmp");
	test = new GameObject(100, 100);

	test->SetTexture(*textureManager->getResource("Content/test.bmp"));

}

	void TestGame::update() {
	Game::update();
	test->draw(window);
}

	void TestGame::render() {
	Game::render();
}


