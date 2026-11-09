//
// Created by awalt on 11/9/2026.
//

#ifndef PIGDICEMULTIPLAYER_PDGAMEV2_H
#define PIGDICEMULTIPLAYER_PDGAMEV2_H
#include <string>


class PDGameV2 {
    private:
    std::string m_playerName;
    public:
    PDGameV2(std::string m_playerName);
    std::string getPlayerName();
    void playGame();
    void displayRules();
};


#endif //PIGDICEMULTIPLAYER_PDGAMEV2_H
