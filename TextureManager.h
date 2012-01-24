#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H
 
#include <SFML/Graphics.hpp>
 
#include "ResourceManager.h"
 
class TextureManager : public ResourceManager< sf::Texture > {
private:
protected:
    virtual sf::Texture* load( const std::string& strId );
public:
};
 
extern TextureManager gTextureManager;
 
#endif // TEXTUREMANAGER_H