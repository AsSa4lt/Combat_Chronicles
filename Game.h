//
// Created by Rostyslav on 26.03.2023.
//

#ifndef COMBAT_CHRONICLES_GAME_H
#define COMBAT_CHRONICLES_GAME_H
#include "SDL.h"


class Game {
private:
    SDL_Window *window;
    bool isRunning;
public:
    Game();
    void init(const char* title, int width, int height, bool fullscreen);
    void clean();

    SDL_Renderer *renderer;
    const bool isActive();

};


#endif //COMBAT_CHRONICLES_GAME_H
