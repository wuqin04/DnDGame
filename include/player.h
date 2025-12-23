#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"

class Player: public Entity{
private: 
    int m_exp;
    int m_level;
    int m_gold;

public:
    Player(int exp, int level, int gold, int hp, int atk, int def, int dex, int intelligence) 
        : Entity(hp, atk, def, dex, intelligence)
    {
        m_exp = exp;
        m_level = level;
        m_gold = gold;
    }
};

#endif