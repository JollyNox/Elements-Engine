#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>


class GameObject : sf::Sprite {

public:

	GameObject();
	GameObject(int x, int y);
		
	~GameObject();

	GameObject(const GameObject& copy);

	int getZOrder();
	void setZOrder(int z);

	float getAlpha();
	void setAlpha(float a);

	bool getVisible();
	void setVisible(bool visibility);



private:

	sf::Vector2<float> velocity;
	sf::Vector2<float> acceleration;
		
	int zOrder;

	float alpha;

	bool visible;
};

#endif

