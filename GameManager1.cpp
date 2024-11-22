//
// Created by DELL on 12/17/2023.
//

#include "Game1.h"

// Class definition for XO_GameManager class
// Author:  Mohammad El-Ramly
// Date:    10/10/2022
// Version: 1

#include <iostream>

using namespace std;

GameManager1::GameManager1(Board1* bPtr, Player1* playerPtr[2] ) {
    boardPtr = bPtr;
    players[0] = playerPtr[0];
    players[1] = playerPtr[1];
}

void GameManager1::run() {

    int x, y;

    boardPtr->display_board1();

    while (!boardPtr->game_is_over1()) {
        for (int i:{0,1}) {
            players[i]->get_move(x, y);
            while (!boardPtr->update_board1 (x, y, players[i]->get_symbol())){
                players[i]->get_move(x, y);
            }
            boardPtr->display_board1();
            if (boardPtr->is_winner1()){
                cout  << players[i]->to_string() << " wins\n";
                return;
            }
            if (boardPtr->is_draw1()){
                cout << "Draw!\n";
                return;
            }
        }
    }
}

