#ifndef SOUNDBUFFERMANAGER_H_INCLUDED
#define SOUNDBUFFERMANAGER_H_INCLUDED
 
#include <SFML/Audio.hpp>
 
#include "ResourceManager.h"
 
class SoundBufferManager : public ResourceManager< sf::SoundBuffer > {
private:
protected:
    virtual sf::SoundBuffer* load( const std::string& strId );
public:
};
 
extern SoundBufferManager gSoundBufferManager;
 
#endif // SOUNDBUFFERMANAGER_H_INCLUDED