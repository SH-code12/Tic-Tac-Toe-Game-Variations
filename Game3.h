// Header of Game3
// Author:  Shahd Mohamed Ahmed
// ID : 20220533
// section : S22
// Date:    17/12/2023
// Version: 1
#ifndef INCLUDE_GAME3_H
#define INCLUDE_GAME3_H

#include<bits/stdc++.h>

using namespace std;

class Board3 {
protected:
    int n_rows, n_cols;
    char** board;
    int  n_moves = 0;

public:
    // Return true  if move is valid and put it on board
    // within board boundaries in empty cell
    // Return false otherwise
    virtual bool update_board3 (int x, int y, char symbol) = 0;
    // Returns true if there is any winner
    // either X or O
    // Written in a complex way. DO NOT DO LIKE THIS.
    virtual bool is_winner3() = 0;
    // Return true if all moves are done and no winner
    virtual bool is_draw3() = 0;
    // Display the board and the pieces on it
    virtual void display_board3() = 0;
    // Return true if game is over
    virtual bool game_is_over3() = 0;
};
 // Inherit from class Board
class Game3_X_O_Board: public Board3 {
public:

    Game3_X_O_Board ();
    bool update_board3 (int x, int y, char mark);
    void display_board3();
    bool is_winner3();
    bool is_draw3();
    bool game_is_over3();
};

class Player3 {
protected:
    char symbol;
public:
    // Two constructors to initiate player
    // Give player a symbol to use in playing
    // It can be X or O or others
    // Optionally, you can give him ID or order
    // Like Player 1 and Player 2
    Player3 (char symbol); // Needed for computer players
    //Player (int order, char symbol);
    // Get desired move: x y (each between 0 and 2)
    // Virtual (can change for other player types)
    virtual void get_move(int& x, int& y);
    // Get symbol used by player
    char get_symbol();
};



class RandomPlayer3: public Player3 {
protected:
    int dimension;
public:
    // Take a symbol and pass it to parent
    RandomPlayer3 (char symbol, int dimension);
    // Generate a random move
    void get_move(int& x, int& y);
};


class GameManager3 {
protected:
    Board3* boardPtr;
    Player3* players[2];
public:
    GameManager3(Board3*, Player3* playerPtr[2]);
    void run() ;
    // This method creates board and players
    // It displays board
    // While True
    //   For each player
    //      It takes a valid move as x, y pair (between 0 - 2)
    //      It updates board and displays otit
    //      If winner, declare so and end
    //      If draw, declare so and end

};



#endif //INCLUDE_GAME3_H


