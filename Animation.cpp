#include <SFML/Graphics.hpp>
#include "Animation.h"
#include <vector>

Animation::Animation(){
	
	currentFrame = 0;
	ticks = 0;
}

Animation::~Animation(){
	 for(int i = 0; i<textures.size(); i++) {
		 delete textures[i];
	 }
}

Animation::Animation(const Animation &copy){
}

	
void Animation::addFrame(sf::Texture *tex){
	textures.push_back(tex);
}

void Animation::setFrame(int frame){
	currentFrame = frame;
}
int Animation::getCurrentFrameId(){
	return currentFrame;
}
	
void Animation::setSpeed(int pSpeed){
	speed = pSpeed;
}

int Animation::getSpeed(){
	return speed;
}

sf::Texture* Animation::getCurrentTexture(){
	return textures[currentFrame];
}

void Animation::update(){
	if(speed == 0) 
		return;
	if(ticks == speed) 
		currentFrame++;
	if(currentFrame > textures.size())
		currentFrame = 0;
}