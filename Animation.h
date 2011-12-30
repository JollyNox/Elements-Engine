#ifndef ANIMATION_H
#define ANIMATION_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <vector.h>

class Animation {

private:
	Vector<sf::Texture> textures;
	float speed;
	int frames;
	int currentFrame;
	sf::Texture texture;
	sf:Rect<int> drawRectangle;

public:
	Animation();
	Animation(sf::Texture tex);
	
	void setTexture(sf::Texture *tex);
	sf::Texture* getTexture();

	void setFrame(int frame);
	int getFrame();

	void update();


	
	
};

#endif