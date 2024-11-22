// Class definition for Player3 class
// Author:  Shahd Mohamed Ahmed
// ID : 20220533
// section : S22
// Date:    17/12/2023
// Version: 1

#include<iostream>
#include<random>
#include<iomanip>
#include<algorithm>
#include "Game3.h"
using namespace std;

// Give player a symbol to use in playing
// It can be X or O or others
// This is needed for computer players
// as it does not ask for a name
Player3::Player3(char symbol) {
    cout<<"Welcome Player 1 ^_^ \n";
    this->symbol = symbol;
}

// Get desired move: x y (each between 0 and 2)
// Virtual (can change for other player types)
void Player3::get_move (int& x, int& y) {
    cout << "\nPlease enter your move x and y (0 to 4) separated by spaces: "; // change (0 to 4) instead )(0 to 2)
    cin >> x >> y;
}

// Get symbol used by player
char Player3::get_symbol() {
    return symbol;
}

