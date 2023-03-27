//
// Created by Rostyslav on 27.03.2023.
//

#ifndef COMBAT_CHRONICLES_STARTSETTINGS_H
#define COMBAT_CHRONICLES_STARTSETTINGS_H
#include "SDL2/SDL.h"

class StartSettings {
private:
    SDL_Window *window;
public:
    StartSettings();
    void init(const char* title, int width, int height, bool fullscreen);
    void clean();
    void update();
    void render();
    void handleEvents();

    static SDL_Renderer *renderer;
    static SDL_Event event;
    static bool isRunning;
};


#endif //COMBAT_CHRONICLES_STARTSETTINGS_H
