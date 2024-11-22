
#include <bits/stdc++.h>
#include "Game2.h"

using namespace std;


// Set the board
Connect_four_Board::Connect_four_Board() {
    n_rows = 6,n_cols = 7;
    board = new char*[n_rows];
    for (int i = 0; i < n_rows; i++)
    {
        board [i] = new char[n_cols];
        for (int j = 0; j < n_cols; j++)
            board[i][j] = ' ';
    }

}
// Return true  if move is valid and put it on board
// within board boundaries in empty cell
// Return false otherwise
bool Connect_four_Board::update_board2(int y, char mark) {
    // Only update if move is valid
    if ( y >= 0 && y < 7) {
        for(int i=5;i>=0;i--){
            if(board[i][y]==' '){
                board[i][y] = toupper(mark);
                n_moves++;
                return true;
            }
        }
    }
    else
        return false;

}
// Returns true if there is any winner
bool Connect_four_Board::is_winner2() {
    for (int row = 0; row < 6; ++row) {
        for (int col = 0; col < 4; ++col) {
            if (board[row][col] != ' ' &&
                board[row][col] == board[row][col + 1] &&
                board[row][col] == board[row][col + 2] &&
                board[row][col] == board[row][col + 3]) {
                return true;
            }
        }
    }

// Check columns
    for (int col = 0; col < 7; ++col) {
        for (int row = 0; row < 3; ++row) {
            if (board[row][col] != ' ' &&
                board[row][col] == board[row + 1][col] &&
                board[row][col] == board[row + 2][col] &&
                board[row][col] == board[row + 3][col]) {
                return true;
            }
        }
    }
    for (int row = 0; row <3; ++row) {
        for (int col = 0; col < 4; ++col) {
            if (board[row][col] != ' ' &&
                board[row][col] == board[row + 1][col + 1] &&
                board[row][col] == board[row + 2][col + 2] &&
                board[row][col] == board[row + 3][col + 3]) {
                return board[row][col];
            }
        }
    }
    for (int row = 0; row < 3; ++row) {
        for (int col = 3; col < 7; ++col) {
            if (board[row][col] != ' ' &&
                board[row][col] == board[row + 1][col - 1] &&
                board[row][col] == board[row + 2][col - 2] &&
                board[row][col] == board[row + 3][col - 3]) {
                return true;
            }
        }
    }
    return false;

}
// Display the board and the pieces on it
void Connect_four_Board::display_board2() {
    for (int i: {0,1,2,3,4,5}) {
        cout << "\n| ";
        for (int j: {0,1,2,3,4,5,6}) {
            cout << "(" << i << "," << j << ")";
            cout << setw(3) << board [i][j] << " |";
        }
        cout << "\n---------------------------------------------------------------------------------";
    }
    cout <<"\n******************************************************************\n";

}
// Return true  no winner

bool Connect_four_Board::is_draw2() {
    return (n_moves == 6*7 && !is_winner2());
}
// Check if the game is over
bool Connect_four_Board::game_is_over2() {
    return n_moves >= 6*7;
}
