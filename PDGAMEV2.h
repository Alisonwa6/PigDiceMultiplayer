//
// Created by awalt on 11/9/2026.
//

#ifndef PIGDICEMULTIPLAYER_PDGAMEV2_H
#define PIGDICEMULTIPLAYER_PDGAMEV2_H
#include <string>
#include "PDGAME.h"

class PDGameV2:public PDGame {
    private:
    std::string m_playerName;
    public:
    PDGameV2(const std::string &playerName);
    virtual ~PDGameV2() = default;
    std::string getPlayerName() const;
    void playGame() override;
    void displayRules() override;
};


#endif //PIGDICEMULTIPLAYER_PDGAMEV2_H
