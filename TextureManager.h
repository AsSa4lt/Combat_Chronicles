//
// Created by Rostyslav on 27.03.2023.
//

#ifndef COMBAT_CHRONICLES_TEXTUREMANAGER_H
#define COMBAT_CHRONICLES_TEXTUREMANAGER_H
#include "Game.h"

class TextureManager {
public:
    static SDL_Texture* LoadTexture(const char* fileName);
    static void Draw(SDL_Texture* tex, SDL_Rect src, SDL_Rect dest, SDL_RendererFlip flip);
};


#endif //COMBAT_CHRONICLES_TEXTUREMANAGER_H
