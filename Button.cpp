//
// Created by Rostyslav on 27.03.2023.
//

#include "Button.h"
#include "iostream"



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
}
