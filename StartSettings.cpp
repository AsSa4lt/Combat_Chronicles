//
// Created by Rostyslav on 27.03.2023.
//

#include "StartSettings.h"
#include "Button.h"

SDL_Renderer* StartSettings::renderer = nullptr;
SDL_Event StartSettings::event;
bool StartSettings::isRunning = false;
Button button(100, 100, 50, 50);

StartSettings::StartSettings() {

}

void StartSettings::init(const char *title, int width, int height, bool fullscreen) {
    int flags = 0;

    if (fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);
        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer)
        {
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        }
        isRunning = true;
    }

}

void StartSettings::handleEvents() {
    SDL_PollEvent(&event);
    switch (event.type)
    {
        case SDL_QUIT :
            isRunning = false;
            break;
        case SDLK_ESCAPE:
            isRunning = false;
            break;
        default:
            break;
    }
}

void StartSettings::update() {
    SDL_SetRenderDrawColor(StartSettings::renderer, 0, 255, 0, 255);
    SDL_RenderClear(StartSettings::renderer);
    button.HandleEvents(&event);
    button.render(renderer);
    SDL_RenderPresent(StartSettings::renderer);
}

void StartSettings::clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}
