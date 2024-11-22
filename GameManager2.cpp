

#include<bits/stdc++.h>

#include "Game2.h"

using namespace std;


GameManager2::GameManager2(Board2* bPtr, Player2* playerPtr[2] ) {
    boardPtr = bPtr;
    players[0] = playerPtr[0];
    players[1] = playerPtr[1];
}

void GameManager2::run() {
    int x=0, y;
    boardPtr->display_board2();

    while (!boardPtr->game_is_over2()) {
        for (int i: {0, 1}) {
            cout<<players[i]->to_string();
            players[i]->get_move(x,y);
            while (!boardPtr->update_board2(y, players[i]->get_symbol())) {
                players[i]->get_move(x,y);
            }
            boardPtr->display_board2();
            if (boardPtr->is_winner2()) {
                cout << players[i]->to_string() << " wins\n";
                return;
            }
            if (boardPtr->is_draw2()) {
                cout << "Draw!\n";
                return;
            }
        }
    }
}