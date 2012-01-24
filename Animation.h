#ifndef ANIMATION_H
#define ANIMATION_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <vector>

class Animation {

private:
	std::vector<sf::Texture*> textures;
	float speed;
	int currentFrame;
	int ticks;

//Will be used for spritesheet implementation later
//	sf::Texture spriteSheet;
//	sf:Rect<int> drawRectangle;

public:
	Animation();
	~Animation();
	Animation(const Animation &copy);

	Animation(sf::Texture tex);
	
	void addFrame(sf::Texture *tex);

	void setFrame(int frame);
	int getCurrentFrameId();
	
	void setSpeed(int pSpeed);
	int getSpeed();

	sf::Texture* getCurrentTexture();

	void update();	
};

#endif