//Program that swaps values of two variables without using additional variables
//Made it by Nikita Volkov

#include <iostream>
using namespace std;

int main()
{
    //Declaring variables
    double a, b;

    //Getting the user input
    cout << "Enter two values(separated by space): ";
    cin >> a >> b;

    //Logic
    a -= b;
    b += a;
    a = b - a;

    //Output
    cout << a << "\t" << b << endl;

    return 0;
}