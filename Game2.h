//
// Created by DELL on 12/17/2023.
//

#ifndef INCLUDE_GAME2_H
#define INCLUDE_GAME2_H


#include <bits/stdc++.h>
using namespace std;

class Board2{
protected:
    int n_rows, n_cols;
    char** board;
    int  n_moves = 0;
    static int cnt;
public:
    // Return true  if move is valid and put it on board
    // within board boundaries in empty cell
    // Return false otherwise
    virtual bool update_board2 ( int y, char symbol) = 0;
    // Returns true if there is any winner
    // either X or O
    // Written in a complex way. DO NOT DO LIKE THIS.
    virtual bool is_winner2() = 0;
    // Return true if all moves are done and no winner
    virtual bool is_draw2() = 0;
    // +9Display the board and the pieces on it
    virtual void display_board2() = 0;
    // Return true if game is over
    virtual bool game_is_over2() = 0;
};
class Connect_four_Board:public Board2 {
public:
    // Set the board
    Connect_four_Board();
    bool update_board2(int y, char symbol) ;
    void display_board2() ;
    bool game_is_over2() ;
    bool is_draw2() ;
    bool is_winner2();

};
class Player2 {
protected:
    string name;
    char symbol;
public:
    Player2 (char symbol); // Needed for computer players
    Player2 (int order, char symbol);
    virtual void get_move( int &x,int& y);
    string to_string();
    char get_symbol() ;

};
class RandomPlayer2: public Player2 {
protected:
    int dimension1;
public:
    // Take a symbol and pass it to parent
    RandomPlayer2 (char symbol, int dimension1);
    // Generate a random move
    void get_move(int&x,int &y) override;
};
class GameManager2 {
private:
    Board2* boardPtr;
    Player2* players[2];
public:
    GameManager2(Board2*, Player2* playerPtr[2]);
    void run();
    // This method creates board and players
    // It displays board
    // While True
    //   For each player
    //      It takes a valid move as x, y pair (between 0 - 2)
    //      It updates board and displays otit
    //      If winner, declare so and end
    //      If draw, declare so and end

};




#endif //INCLUDE_GAME2_H
