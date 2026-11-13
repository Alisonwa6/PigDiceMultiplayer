//
// Created by awalt on 11/9/2026.
//

#include "MULTIPLAYER.h"

#include <algorithm>
#include <iostream>

MultiPlayer::MultiPlayer() {
    while (1) {
        try {
            m_gameOver = false;
            int count = 0;
            std::string tempName;
            std::cout << "How many people are playing? ";
            std::cin >> count;
            if (std::cin.fail()) {
                throw 275;
            }
            std::cin.ignore();
            for (int i = 0; i < count; i++) {
                std::cout << "Enter player " << i + 1 << "'s name: ";
                std::getline(std::cin, tempName);
                /*auto *ptr = new PDGameV2(tempName);
                m_players.push_back(*ptr);*/
                m_players.emplace_back(tempName);
            }
            break;
        }
        catch (int e) {
            std::cin.clear();
            std::cin.ignore(100, '\n');
            std::cout << "Invalid data entered - Code: " << e << std::endl;
            continue;
        }
    }
    std::cout << std::endl;
}

void MultiPlayer::mpPlayGame() {
    m_players[0].displayRules();
    while (!m_gameOver) {
        for (int i = 0; i < m_players.size(); i++) {
            std::cout << "\n\n" << m_players.at(i).getPlayerName() << " (Score:" << m_players.at(i).getGameScore() << ")";
            m_players.at(i).playGame();
            displayScoreBoard();
        }
        checkForWinner();
    }
}

void MultiPlayer::checkForWinner() {
    std::vector<int> scoreOver50(m_players.size());
    for (int i = 0; i < m_players.size(); i++) {
        if (m_players.at(i).getGameScore() >= 50) {
            scoreOver50.at(i) = m_players.at(i).getGameScore();
            m_gameOver = true;
        }
    }
    if (m_gameOver) {
        auto it = std::max_element(scoreOver50.begin(), scoreOver50.end());
        long long index = std::distance(scoreOver50.begin(), it);
        std::cout << "\n\nCongratulations! " << m_players[index].getPlayerName() << " you win with a score of " << m_players[index].getGameScore() << ".\n\n";
    }
}

void MultiPlayer::displayScoreBoard() const{
    std::cout << "\n\n";
    for (int i = 0; i < m_players.size(); i++) {
        std::cout << m_players.at(i).getPlayerName() << " (Score:" << m_players.at(i).getGameScore() << ") | ";
    }
}
