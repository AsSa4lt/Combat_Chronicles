//
// Created by Rostyslav on 26.03.2023.
//

#ifndef COMBAT_CHRONICLES_GAME_H
#define COMBAT_CHRONICLES_GAME_H
#include "SDL2/SDL.h"


class Game {
private:
    SDL_Window *window;
public:
    Game();
    ~Game();
    void init(const char* title, int width, int height, bool fullscreen);

    static SDL_Renderer *renderer;


};


#endif //COMBAT_CHRONICLES_GAME_H
