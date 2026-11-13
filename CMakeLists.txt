cmake_minimum_required(VERSION 4.3)
project(PigDiceMultiplayer)

set(CMAKE_CXX_STANDARD 14)

add_executable(PigDiceMultiplayer
        main.cpp
        DIE.h
        DIE.cpp
        TURN.cpp
        TURN.h
        PDGAME.cpp
        PDGAME.h
        PDGAMEV2.cpp
        PDGAMEV2.h
        MULTIPLAYER.cpp
        MULTIPLAYER.h)
