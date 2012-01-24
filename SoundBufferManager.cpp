#include <iostream>
 
#include "SoundBufferManager.h"
 
using namespace std;
 
SoundBufferManager gSoundBufferManager;
 
sf::SoundBuffer* SoundBufferManager::load( const std::string& strId ) {
    sf::SoundBuffer* buffer = new sf::SoundBuffer();
    if( !buffer->LoadFromFile( strId ) ) {
        cout << "[WARN] SoundBufferManager failed to load: " << strId << endl;
        delete buffer;
        buffer = NULL;
    }
 
    return buffer;
}