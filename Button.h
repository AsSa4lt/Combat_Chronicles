//
// Created by Rostyslav on 27.03.2023.
//

#ifndef COMBAT_CHRONICLES_BUTTON_H
#define COMBAT_CHRONICLES_BUTTON_H
#include "SDL.h"

class Button  : SDL_Rect {
public:
    Button(int x, int y, int w, int h) : SDL_Rect({ x, y, w, h }) {}
    bool HandleEvents(SDL_Event* event);
    void render(SDL_Renderer* renderer);
};


#endif //COMBAT_CHRONICLES_BUTTON_H
