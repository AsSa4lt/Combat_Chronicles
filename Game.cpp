//
// Created by Rostyslav on 26.03.2023.
//

#include "Game.h"
#include "SDL_image.h"
#include "iostream"
#include "TextureManager.h"

SDL_Renderer* Game::renderer = nullptr;
SDL_Event Game::event;
bool Game::isRunning = false;


void Game::init(const char *title, int width, int height, bool fullscreen) {
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
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    SDL_Texture *img = NULL;
    img = IMG_LoadTexture(renderer, "../Assets/player.png");
    // put the location where we want the texture to be drawn into a rectangle
    // I'm also scaling the texture 2x simply by setting the width and height
    SDL_Rect texr; texr.x = 800/2; texr.y = 640/2; texr.w = 32*2; texr.h = 32*2;
    SDL_RenderClear(renderer);
    // copy the texture to the rendering context
    SDL_RenderCopy(renderer, img, NULL, &texr);
    // flip the backbuffer
    // this means that everything that we prepared behind the screens is actually shown
    SDL_RenderPresent(renderer);
}

Game::Game() {

}



void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}

void Game::handleEvents() {
    SDL_PollEvent(&event);
    switch (event.type)
    {
        case SDL_QUIT :
            isRunning = false;
            break;
        default:
            break;
    }
}

void Game::update() {

}

void Game::render() {

}

