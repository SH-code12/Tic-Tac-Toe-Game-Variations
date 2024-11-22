cmake_minimum_required(VERSION 3.24)
project(A3_Task_2_S17_S18_S22_20220533_20220083_20220357)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(A3_Task_2_S17_S18_S22_20220533_20220083_20220357
        BoardGame_Classes.hpp
        Connect_four_Board.cpp
        Game1.h
        Game2.h
        Game3.h
        Game3_X_O_Board.cpp
        GameManager.cpp
        GameManager1.cpp
        GameManager2.cpp
        GameManager3.cpp
        Menu.cpp
        Player.cpp
        Player1.cpp
        Player2.cpp
        Player3.cpp
        pyramid_X_O_Board.cpp
        RandomPlayer.cpp
        RandomPlayer1.cpp
        RandomPlayer2.cpp
        RandomPlayer3.cpp
        X_O_Board.cpp)
