#ifndef PIGDICEMULTIPLAYER_DIE_H
#define PIGDICEMULTIPLAYER_DIE_H

class Die {
private:
    int m_dieValue;
public:
    Die();
    void rollDie();
    int getDieValue() const;
};

#endif //PIGDICEMULTIPLAYER_DIE_H