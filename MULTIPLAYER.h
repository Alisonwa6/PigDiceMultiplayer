//
// Created by awalt on 11/9/2026.
//

#ifndef PIGDICEMULTIPLAYER_MULTIPLAYER_H
#define PIGDICEMULTIPLAYER_MULTIPLAYER_H
#include <vector>

#include "PDGAMEV2.h"


class MultiPlayer {
private:
    std::vector<PDGameV2> m_players;
    bool m_gameOver;
public:
    MultiPlayer();
    void mpPlayGame();
private:
    void checkForWinner();
    void displayScoreBoard() const;
};


#endif //PIGDICEMULTIPLAYER_MULTIPLAYER_H
