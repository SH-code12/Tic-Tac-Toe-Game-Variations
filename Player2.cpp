
#include "Game2.h"

#include<bits/stdc++.h>

#include<iostream>
#include<random>
#include<iomanip>
#include<algorithm>

using namespace std;

Player2::Player2(char symbol) {
    this->symbol = symbol;
}
Player2::Player2 (int order, char symbol) {
    cout << "Welcome player " << order << endl;
    cout << "Please enter your name: ";
    cin >> name;
    this->symbol = symbol;
}
void Player2::get_move ( int &x,int& y) {
    cout << "\nPlease enter your move y (0 to 6) separated by spaces: ";
    cin  >> y;
}
string Player2::to_string(){
    return "Player: " + name ;
}
char Player2::get_symbol() {
    return symbol;
}