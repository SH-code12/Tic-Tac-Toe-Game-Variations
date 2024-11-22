
#include<bits/stdc++.h>

#include"Game2.h"

using namespace std;

RandomPlayer2::RandomPlayer2 (char symbol, int dimension1):Player2(symbol)
{
    this->dimension1 = dimension1;
    this->name = "Random Computer Player";
    cout << "My names is " << name << endl;
}
void RandomPlayer2::get_move ( int &x,int& y) {
    y = (int) (rand()/(RAND_MAX + 1.0) * dimension1);
}