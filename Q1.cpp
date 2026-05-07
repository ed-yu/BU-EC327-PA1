#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d, e, f = 0;
    string coordholder = "";
    char convert;
    cout << "Enter three x,y coordinates" << endl;
    cin >> a >> b >> c >> d >> e >> f;

    int bd = d - b; //A
    int ca = a - c; //B
    int cbda = c*b - d*a; // C

    int mag_a = abs((bd * e) + (ca * f)+ cbda);

    int mag_b = (bd * bd) + (ca * ca);
    double bottom = (double)mag_b;
    bottom = sqrt(bottom);
    //d = | Ax3 + By3 + C| / sqrt(A^2 + B^2)

    double divide = (mag_a * 1.0) / bottom;
    

    cout << "The shortest distance for (" << e << "," << f << ")" << " to the line composed of (" << a << "," << b << ") and ("<< c << "," << d << ")" << " is " << (round(divide * 100.0))/100.0 << endl ;
    return(0);

}