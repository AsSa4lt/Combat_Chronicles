//
// Created by Rostyslav on 26.03.2023.
//

#ifndef COMBAT_CHRONICLES_GAME_H
#define COMBAT_CHRONICLES_GAME_H
#include "SDL.h"


class Game {
private:
    SDL_Window *window;
public:
    Game();
    void init(const char* title, int width, int height, bool fullscreen);
    void clean();
    void update();
    void render();
    void handleEvents();

    static SDL_Renderer *renderer;
    static SDL_Event event;
    static bool isRunning;

};



#endif //COMBAT_CHRONICLES_GAME_H
