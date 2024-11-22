#include <iostream>
#include <random>
#include <iomanip>
#include <algorithm>
#include "Game1.h"
using namespace std;

pyramid_X_O_Board::pyramid_X_O_Board() {
    n_rows = 3;  // Three rows for a pyramid
    n_cols = 5;  // Five columns for the base of the pyramid
    board = new char*[n_rows];
    for (int i = 0; i < n_rows; i++) {
        board[i] = new char[n_cols];
        for (int j = 0; j < n_cols; j++)
            board[i][j] = 0;
    }
}
bool pyramid_X_O_Board::update_board1(int x, int y, char mark){

    if (!(x < 0 || x > 2 || y < 0 || y > 4 || (x==0&&y!=2)|| (x==1 &&(y==0 || y==4))) && (board[x][y] == 0)) {
        board[x][y] = toupper(mark);
        n_moves++;
        return true;
    }
    else
        return false;
}
void pyramid_X_O_Board::display_board1() {
    cout<<"          |"<<board[0][2]<<"(0,2)"<<" |          "<<endl;
    cout<<"-------------------------------------------------\n";

    cout<<"     |" <<board[1][1]<<"(1,1)"<<"  |"<<board[1][2]<<"(1,2)"<<"  |"<<board[1][3]<<"(1,3)"<<"  | "<<endl;
    cout<<"-------------------------------------------------\n";

    cout<<"|"<<board[2][0]<<"(2,0)"<<"  |"<<board[2][1]<<"(2,1)"<<"  |"<<board[2][2]<<"(2,2)"<<"  |"<<board[2][3]<<"(2,3)"<<"  |"<<board[2][4]<<"(2,4)"<<"  |"<<endl;
    cout<<"-------------------------------------------------\n"<<endl;


}
bool pyramid_X_O_Board::is_winner1() {
    //check horizontal

    if(board[1][1] != 0 && (board[1][1] ==board[1][2] )&& (board[1][1] == board[1][3]))
        return true;
    if(board[2][0] !=0 && (board[2][0]==board[2][1]) && (board[2][0]==board[2][2]))
        return true ;
    if(board[2][1] !=0 && (board[2][1]==board[2][2]) && (board[2][1]==board[2][3]))
        return true ;

    if(board[2][2] !=0 && (board[2][2]==board[2][3]) && (board[2][2]==board[2][4]))
        return true ;
    //check vertical
    if(board[0][2] != 0 && (board[0][2] == board[1][2])&& (board[0][2] == board[2][2]))
        return true;

    //check diagonal
    if (board[0][2] != 0 && (board[0][2] == board[1][1]) &&( board[0][2] == board[2][0]))
        return true;

    if (board[0][2] != 0 && board[0][2] == board[1][3] && board[0][2] == board[2][4])
        return true;

    else
        return false;


}

bool pyramid_X_O_Board::is_draw1() {

    return (n_moves == 9 && !is_winner1());
}
bool pyramid_X_O_Board::game_is_over1() {
    return n_moves >=9;
}
