// Class definition for Game3_X_O_Board class
// Author:  Shahd Mohamed Ahmed
// ID : 20220533
// section : S22
// Date:    17/12/2023
// Version: 1
#include <iostream>
#include <random>
#include <iomanip>
#include <algorithm>

#include "Game3.h"
using namespace std;


// // Set the board
Game3_X_O_Board::Game3_X_O_Board() {
    n_rows = n_cols = 5;
    board = new char*[n_rows];
    for (int i = 0; i < n_rows; i++) {
        board [i] = new char[n_cols];
        for (int j = 0; j < n_cols; j++)
            board[i][j] = 0;
    }
    n_moves = 0;

}

// Return true  if move is valid and put it on board
// within board boundaries in empty cell
// Return false otherwise
bool Game3_X_O_Board:: update_board3 (int x, int y, char mark){
     // Only update if move is valid
    if (!(x < 0 || x > 4 || y < 0 || y > 4) && (board[x][y] == 0)) {
        board[x][y] = toupper(mark);
        n_moves++;
        return true;
    }
    else
        return false;

}
 // Display the board and the pieces on it
void Game3_X_O_Board::display_board3(){
    for (int i: {0,1,2,3,4}) {
        cout << "\n| ";
        for (int j: {0,1,2,3,4}) {
            cout << "(" << i << "," << j << ")";
            cout << setw(2) << board [i][j] << " |";
        }
        cout << "\n-----------------------------";
    }
    cout << endl;

}


// return true after 24 moves

bool Game3_X_O_Board::is_winner3() {
    //  array to store any player play with which symbol
    char Symbol[] = {'X', 'O'};
    // array to store num_win game to each player
    int Player_cnt[] = {0, 0};
     // Rules to win
    for (char sy : Symbol) {
        for (int i = 0; i < n_rows; i++) {
            for (int j = 0; j < n_cols; j++) {

                // Check columns
                if (i + 2 < n_rows &&
                    board[i][j] == sy &&
                    board[i + 1][j] == sy &&
                    board[i + 2][j] == sy) {
                    Player_cnt[sy == 'X' ? 0 : 1]++;
                }

                // Check rows

                if (j + 2 < n_cols &&
                    board[i][j] == sy &&
                    board[i][j + 1] == sy &&
                    board[i][j + 2] == sy) {
                    Player_cnt[sy == 'X' ? 0 : 1]++;
                }

                // Check diagonal
                if (i + 2 < n_rows && j + 2 < n_cols &&
                    board[i][j] == sy &&
                    board[i + 1][j + 1] == sy &&
                    board[i + 2][j + 2] == sy) {
                    Player_cnt[sy == 'X' ? 0 : 1]++;
                }

                // Check reverse diagonal
                if (i - 2 >= 0 && j + 2 < n_cols &&
                    board[i][j] == sy &&
                    board[i - 1][j + 1] == sy &&
                    board[i - 2][j + 2] == sy) {
                    Player_cnt[sy == 'X' ? 0 : 1]++;
                }
            }
        }
    }
   // condition to print result of game at end of game
    if (n_moves == 24) {
        // Print the winner after 24 moves
        // return true if X wins
        if (Player_cnt[0] > Player_cnt[1]) {
            cout << "Player " << (Player_cnt[0] > Player_cnt[1] ? 'X' : 'O') << " wins  " << max(Player_cnt[0], Player_cnt[1]) << " times!\n";
            return true;
        }
            // return true if O wins
        else if (Player_cnt[0] < Player_cnt[1]){
            cout << "Player " << (Player_cnt[0] > Player_cnt[1] ? 'X' : 'O') << " wins  " << max(Player_cnt[0], Player_cnt[1]) << " times!\n";

            return true;
        }
            // return true if game draw
        else{
            cout<<"Draw game!\n";
            return true;
        }
    }

    return false;
}
// Return true if 24 moves are done and no winner

bool Game3_X_O_Board::is_draw3(){
    return (n_moves == 24 && !is_winner3());

}
// Check if the game is over (24 moves reached)
bool Game3_X_O_Board::game_is_over3(){
    return n_moves >= 24;
}




