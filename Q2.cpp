#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    //vars
    double billAmt = 0; //original bill amt
    double taxRate = 0; // tax rate
    int tipOp = 0; // tip option 1, 2, 3, etc.
    bool inc = true; //incorrect selection
    double tipPer = 0; // tip percent
    bool tipPosTax; //add tip Pos tax
    double preTotal = 0; //total bill before tip + tax
    double totalTip = 0; // total tip / either before or after tax
    double finBill = 0; // final bill

    cout << "Enter the original bill amount: " << endl;
    cin >> billAmt;
    cout << "Enter the tax rate %: " << endl;
    cin >> taxRate;
    taxRate = taxRate/100;

    while(inc==true)
    {
        cout << "Enter tip level (1=10%, 2=15%, 3=20%, 4=25%): " << endl;
        cin >> tipOp;
            if (tipOp >= 1 && tipOp <= 4)
            {
            inc = false; //stop exception loop

                if(tipOp == 1)
                {
                    tipPer = .10;
                }
                if(tipOp == 2)
                {
                    tipPer = .15;
                }
                if(tipOp == 3)
                {
                    tipPer = .20;
                }
                if(tipOp == 4)
                {
                    tipPer = .25;
                }
            }
            else
            {
                cout << "invalid" << endl;
            }
    }
    inc = true;
    while(inc)
    {
    cout << "Tip on post-tax amount? (1=yes, 2=no): " << endl;
    cin >> tipOp;
        if(tipOp == 1 || tipOp == 2)
        {
            inc = false; //exit
            if(tipOp == 1)
            {
                tipPosTax = true;
            }
            else
            {
                tipPosTax = false;
            }
        }
        else
            {
                cout << "invalid" << endl;
            }

    }

    preTotal = billAmt + billAmt*taxRate;


    cout << "The total bill pre-tip is: $" << (round(preTotal * 100.0))/100.0 << endl;

    if(tipPosTax == true)
    {
        totalTip = preTotal * tipPer;
    }
    else
    {
        totalTip = billAmt * tipPer;
    }

     cout << "The total tip is: $" << (round((totalTip)*100.0))/100.0 << endl;
    cout << "The total bill post-tip is: $" << (round((preTotal + totalTip)*100.0))/100.0 << endl;
        
    return(0);
}