//
// Created by Rostyslav on 27.03.2023.
//

#ifndef COMBAT_CHRONICLES_PLAYER_H
#define COMBAT_CHRONICLES_PLAYER_H


class Player {
private:
    bool isMoving;
public:
    Player();
    ~Player();
    int hp;
    char * path = "../Assets/player.png";

};


#endif //COMBAT_CHRONICLES_PLAYER_H
