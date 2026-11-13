#ifndef PIGDICEMULTIPLAYER_PDGAME_H
#define PIGDICEMULTIPLAYER_PDGAME_H
#include "TURN.h"

class PDGame {
protected:
    Turn m_myTurn;
    bool m_gameOver;
    int m_gameScore;
public:
    PDGame();
    int getGameScore() const; // 1.
    virtual void displayRules();
    virtual void playGame();
};


#endif //PIGDICEMULTIPLAYER_PDGAME_H
