//
// Created by Rostyslav on 27.03.2023.
//

#include "Button.h"
#include "iostream"
#include "SDL_ttf.h"



bool Button::HandleEvents(SDL_Event *event) {
    if (event->type == SDL_MOUSEBUTTONDOWN) {
        int mouseX = event->button.x;
        int mouseY = event->button.y;
        SDL_Point mousePos = { mouseX, mouseY };
        if (SDL_PointInRect(&mousePos, this)) {
            //ToDo: actions when button is clicked
            std::cout <<"nice";
            return true;
        }
    }
    return false;
}

void Button::render(SDL_Renderer *renderer) {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, this);
    SDL_Color textColor = { 0, 0, 0, 255 };

    TTF_Font *font = TTF_OpenFont("../Assets/arial.ttf", 24);
    SDL_Surface* textSurface = TTF_RenderText_Solid(font, "Start", textColor);
    SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
    SDL_Rect textDestRect ;
    textDestRect.w = 100;
    textDestRect.h = 100;
    textDestRect.x = 100;
    textDestRect.y = 100;

    SDL_RenderCopy(renderer, textTexture, NULL, &textDestRect);

    SDL_FreeSurface(textSurface);
    SDL_DestroyTexture(textTexture);
}

