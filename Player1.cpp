// Class definition for XO_Player class
// Author:  Mohammad El-Ramly
// Date:    10/10/2022
// Version: 1
#include<iostream>
#include<random>
#include<iomanip>
#include<algorithm>

#include<Game1.h>

using namespace std;

// Give player a symbol to use in playing
// It can be X or O or others
// This is needed for computer players
// as it does not ask for a name
Player1::Player1(char symbol) {
    this->symbol = symbol;
}

// Optionally, you can give him ID or order
// Like Player 1 and Player 2
Player1::Player1 (int order, char symbol) {
    cout << "Welcome player " << order << endl;
    cout << "Please enter your name: ";
    cin >> name;
    this->symbol = symbol;
}

// Get desired move: x y (each between 0 and 2)
// Virtual (can change for other player types)
void Player1::get_move (int& x, int& y) {
    cout << "\nPlease enter your move x and y (0 to 4) separated by spaces: "; // change (0 to 4) instead )(0 to 2)
    cin >> x >> y;
}

// Give player info as a string
string Player1::to_string(){
    return "Player: " + name ;
}

// Get symbol used by player
char Player1::get_symbol() {
    return symbol;
}
