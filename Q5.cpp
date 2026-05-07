#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main()
{
    char userInput; //Character that user inputted
    char key; //key



    cout << "Enter a letter: " << endl;
    cin >> userInput;

    if((userInput>64 && userInput<91) || (userInput>96 && userInput<123))
    {
        if(userInput==90 || userInput==122)
        {
            if(userInput == 90)
            {
                key = 65;
            }
            else
            {
                key = 97;
            }
        }
        else
        {
            key = userInput + 1;
        }
        cout << "CRYPTO: " << key << endl;
    }
    else
    {
        cout << "YOU DID NOT ENTER A LETTER" << endl;
    }

    return 0;
}