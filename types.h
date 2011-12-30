#ifndef TYPES_H
#define TYPES_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <string.h>
#include "types.h"

struct WindowParams{
	unsigned int width;
	unsigned int height;
	bool showMouse;
	unsigned int bpp;
	std::string title;
	unsigned int framerateLimit;
	sf::Color backgroundColor;
	bool fullscreen;

};


#endif