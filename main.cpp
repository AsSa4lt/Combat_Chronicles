#include <iostream>
#include "Game.h"
#include "StartSettings.h"
#include "Button.h"

Game *game = nullptr;
StartSettings *startSettings = nullptr;

int main() {
    game = new Game();
    startSettings = new StartSettings();
    const int FPS = 60;
    const int frameDelay = 1000/FPS;
    uint32_t frameStart;
    int frameTime;

    startSettings->init("Settings", 500, 500, false);
    while (startSettings->isRunning){
        SDL_Event event;
        frameStart = SDL_GetTicks();
        startSettings->update();
        startSettings->handleEvents();
        frameTime = SDL_GetTicks() - frameStart;
        if(frameDelay > frameTime){
            SDL_Delay(frameDelay-frameTime);
        }

    }
    startSettings->clean();

    //Game launch
    /*game->init("Game", 800, 640, false);
    while (game->isRunning){
        frameStart = SDL_GetTicks();
        game->update();
        game->handleEvents();
        frameTime = SDL_GetTicks() - frameStart;
        if(frameDelay > frameTime){
            SDL_Delay(frameDelay-frameTime);
        }
        if(!game->isRunning){
            break;
        }
    }*/
    game->clean();
    return 0;
}
