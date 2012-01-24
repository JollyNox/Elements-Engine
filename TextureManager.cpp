#include <iostream>
 
#include "TextureManager.h"
 
using namespace std;
 
TextureManager gTextureManager;
 
sf::Texture* TextureManager::load( const std::string& strId ) {
    sf::Texture* texture = new sf::Texture();
    if( !texture->LoadFromFile( strId ) ) {
        cout << "[WARN] TextureManager failed to load: " << strId << endl;
        delete texture;
        texture = NULL;
    }
 
    return texture;
}