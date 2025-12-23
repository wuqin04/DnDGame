#ifndef ENTITY_H
#define ENTITY_H

class Entity{
protected:
    int m_hp;
    int m_atk;
    int m_def;
    int m_dex;
    int m_int;

public:
    Entity(int hp, int atk, int def, int dex, int intelligence) {
        m_hp = hp;
        m_atk = atk;
        m_def = def;
        m_dex = dex;
        m_int = intelligence;
    }
};

#endif