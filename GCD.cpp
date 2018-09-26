
#include <iostream>
#include <iomanip>
using namespace std;

int gcd_func(int x, int y)
{
    if ( y == 0 )
        return x;
    else if(y > 0)
        return gcd_func(y,x%y);

}

int main()
{
    int x,y,gcdVar = 0;
    cout<< "Input two numbers to calculate the greatest common divisor: ";
    cin >> x >> y;

    gcdVar=gcd_func(x,y);
    //Prints out gcd
    if(gcdVar != 0)
        cout<< "The greatest common divisor for " <<setw(3) << x << " "
                                                  <<setw(3) << y
                                                  <<" is "<< gcdVar;
    else
        cout<< "The greatest common divisor doesn't exist";

}
