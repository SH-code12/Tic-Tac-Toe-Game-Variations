// Class definition for RandomPlayer3 class
// Author:  Shahd Mohamed Ahmed
// ID : 20220533
// section : S22
// Date:    17/12/2023
// Version: 1
#include<iostream>
#include<random>
#include<algorithm>
#include "Game3.h"
using namespace std;

// Set player symbol and name as Random Computer Player
RandomPlayer3::RandomPlayer3 (char symbol, int dimension):Player3(symbol)
{
    this->dimension = dimension;
    cout << "Hello, My names is RandomPlayer3:" << endl;
}

// Generate a random move
void RandomPlayer3::get_move (int& x, int& y) {
    x = (int) (rand()/(RAND_MAX + 1.0) * dimension);
    y = (int) (rand()/(RAND_MAX + 1.0) * dimension);
}
