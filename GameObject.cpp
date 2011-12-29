#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include "GameObject.h"

GameObject::GameObject() : sf::Sprite() {
	SetPosition(0, 0);
}

GameObject::GameObject(int x, int y) : sf::Sprite() {
	SetPosition(x, y);
}
		
GameObject::~GameObject() {}

GameObject::GameObject(const GameObject& copy) {}

int GameObject::getZOrder(){
	return zOrder;
}
void GameObject::setZOrder(int z){
	zOrder = z;
}

float GameObject::getAlpha(){
	return alpha;
}

void GameObject::setAlpha(float a){
	alpha = a;
}

void GameObject::setVisible(bool visibility) {
	visible = visibility;
}

bool GameObject::getVisible() {
	return visible;
}






