#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;


int main()
{
    int fire = 0; //fire value
    int water = 1; //water value
    int grass = 2; //grass value

    int playerChoose; //player select
    int compChoose; //comp select

    string compSelect = ""; //computerSelect as a string

    string winPhrase = "";

    cout << "Choose Fire (0), Water(1), or Grass(2): " << endl;
    cin >> playerChoose;

    srand (time(NULL)); //init random seed
    compChoose = rand() % 2; //generate num between 0-2

    if(compChoose==0)
    {
        compSelect = "Fire";
    }
    else if(compChoose==1)
    {
        compSelect = "Water";
    }
    else //(compChoose == 2)
    {
        compSelect = "Grass";
    }

    cout << "Computer chooses: " << compSelect << endl;


    if(playerChoose == compChoose)
    {
        winPhrase = "You tie";
    }
    else if(playerChoose == 0 && compChoose == 1)
    {
        winPhrase = "You lose!";
    }
    else if(playerChoose == 0 && compChoose == 2)
    {
        winPhrase = "You win!";
    }
    else if (playerChoose == 1 && compChoose == 0)
    {
        winPhrase = "You win!";
    }
    else if (playerChoose == 1 && compChoose == 2)
    {
        winPhrase = "You lose!";
    }
    else if(playerChoose == 2 && compChoose == 0)
    {
        winPhrase = "You lose!";
    }
    else if (playerChoose == 2 && compChoose == 1)
    {
        winPhrase = "You win!";
    }
    cout << winPhrase << endl; //print winPhrase

    return 0;
}