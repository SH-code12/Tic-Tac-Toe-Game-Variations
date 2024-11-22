#include <iostream>
#include "Game3.h"
#include "Game2.h"
#include "Game1.h"
#include "BoardGame_Classes.hpp"

using namespace std;

int main() {
    int n = 0;
    while ( n == 0) {
        cout<<"Welcome ya Ala Player ^_^ "<<endl;
        cout<<"Menu: "<<"\n"<<"(1)Traditional X_O\n"<<"(2) Pyramic Tic-Tac-Toe"
            <<"\n"<<"(3) Four-in-a-row "<<"\n"<<"(4) 5 x 5 Tic Tac Toe "<<"\n"<<"(5) Exit"<<endl;
        //------------------------------------------------------------------------------------------
        int choice;
        cout<<"Enter your choice ^_^ : ";
        cin>>choice;
        cout<<"\n";

       if(choice == 1) {
            int choice_player;
            Player* players[2];
            players[0] = new Player (1, 'x');

            cout << "Welcome to FCAI X-O Game. :)\n";
            cout << "Press 1 if you want to play with computer: ";
            cin >> choice_player;
            if (choice_player != 1)
                players[1] = new Player ( 'o');
            else
                //Player pointer points to child
                players[1] = new RandomPlayer ('o', 5); // change dimension
            GameManager x_o_game (new X_O_Board, players);
            x_o_game.run();
            system ("pause");
       }

       else if(choice == 2){
           int choice_player;
           Player1* players[2];
           players[0] = new Player1 (1, 'x');

           cout << "Welcome to FCAI X-O Game. :)\n";
           cout << "Press 1 if you want to play with computer: ";
           cin >> choice_player;
           if (choice_player != 1)
               players[1] = new Player1 ( 'o');
           else
               //Player pointer points to child
               players[1] = new RandomPlayer1 ('o', 5); // change dimension
           GameManager1 x_o_game1 (new pyramid_X_O_Board, players);
           x_o_game1.run();
           system ("pause");

        }

       else if(choice == 3){
           int choice_player;
           Player2* players[2];
           players[0] = new Player2 (1, 'x');

           cout << "Welcome to FCAI X-O Game. :)\n";
           cout << "Press 1 if you want to play with computer: ";
           cin >> choice_player;
           if (choice_player != 1)
               players[1] = new Player2 ( 'o');
           else
               //Player pointer points to child
               players[1] = new RandomPlayer2 ('o', 7); // change dimension
           GameManager2 x_o_game2 (new Connect_four_Board, players);
           x_o_game2.run();
           system ("pause");

       }


       else if (choice == 4){
            int choice_player;
            Player3* players[2];     // change to Player3
            players[0] = new Player3 ('x');

            cout << "Welcome to FCAI X-O Game. :)\n";
            cout << "Press 1 if you want to play with computer: ";
            cin >> choice_player;
            if (choice_player != 1)
                players[1] = new Player3 ( 'o');
            else
                //Player pointer points to child
                players[1] = new RandomPlayer3 ('o', 5); // change dimension
            GameManager3 x_o_game3( new Game3_X_O_Board, players);
            x_o_game3.run();
            system ("pause");
        }

       else if (choice == 5){
           cout<<"Thank you for using our games ^_^ see you later ^_^ "<<endl;
           break;
       }

        else{
            cout<<"Invalid choice, Please enter valid choice ^_^\n";
            cout<<"Enter zero to show Menu again ^_^ : ";
            cin>>choice;
            cout<<"\n";
        }

    }

}
