// Class definition for XO_GameManager3 class
// Author:  Shahd Mohamed Ahmed
// ID : 20220533
// section : S22
// Date:    17/12/2023
// Version: 1

#include <iostream>

#include "Game3.h"

using namespace std;

GameManager3::GameManager3(Board3* bPtr, Player3* playerPtr[2] ) {
    boardPtr = bPtr;
    players[0] = playerPtr[0];
    players[1] = playerPtr[1];
}

void GameManager3::run() {

    int x, y;

    boardPtr->display_board3();

    for (int move = 1; move <= 24; ++move) {   // loop for 24 times 12 to every player
        for (int i: {0, 1}) {
            players[i]->get_move(x, y);
            while (!boardPtr->update_board3(x, y, players[i]->get_symbol())) {
                players[i]->get_move(x, y);
            }
            boardPtr->display_board3();
            boardPtr->is_winner3();
            if(boardPtr->game_is_over3()){
                return;
            }

        }
    }
}
