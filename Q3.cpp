#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2; //inputs
    int hammingDistance; //difference
    int count = 0; //counter
    int resolver1 = 0; //loop num to determine ternary format
    int resolver2 = 0; //loop num to determine ternary format
    int num1_pos0 = 0; //position to determine ternary
    int num1_pos1 = 0; //counts ternary positions, would be used later to compare differences among ternary sequences. If differen
    int num1_pos2 = 0;
    int num1_pos3 = 0;
    int num1_pos4 = 0;
    int num2_pos0 = 0;
    int num2_pos1 = 0;
    int num2_pos2 = 0;
    int num2_pos3 = 0;
    int num2_pos4 = 0;

    cout << "Enter two numbers between 0-100: " << endl;
    cin >> num1;
    cin >> num2;

    resolver1 = num1; //input number to be resolved, value is subtracted until the value is below the tenary number
    resolver2 = num2;

    while(resolver1 >= 81)
    {
        resolver1 = resolver1 - 81;
        num1_pos4++;
    }
    while(resolver1 >= 27)
    {
        resolver1 = resolver1 - 27;
        num1_pos3++;
    }
    while(resolver1 >= 9)
    {
        resolver1 = resolver1 - 9;
        num1_pos2++;
    }
    while(resolver1 >= 3)
    {
        resolver1 = resolver1 - 3;
        num1_pos1++;
    }
    num1_pos0 = resolver1;

    while(resolver2 >= 81)
    {
        resolver2 = resolver2 - 81;
        num2_pos4++;
    }
    while(resolver2 >= 27)
    {
        resolver2 = resolver2 - 27;
        num2_pos3++;
    }
    while(resolver2 >= 9)
    {
        resolver2 = resolver2 - 9;
        num2_pos2++;
    }
    while(resolver2 >= 3)
    {
        resolver2 = resolver2 - 3;
        num2_pos1++;
    }
    num2_pos0 = resolver2;

    if(num1_pos4 != num2_pos4) //compares if ternary sequence position is different
    {
        count++;
    }
    if(num1_pos3 != num2_pos3)
    {
        count++;
    }
    if(num1_pos2 != num2_pos2)
    {
        count++;
    }
    if(num1_pos1 != num2_pos1)
    {
        count++;
    }
    if(num1_pos0 != num2_pos0)
    {
        count++;
    }
    hammingDistance = count;
    cout << "Hamming distance between " << num1 << " and " << num2 << " when numbers are in ternary format is: " << hammingDistance << "." << endl;
    return(0);
}