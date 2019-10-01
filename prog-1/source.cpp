//Program that calculates the perimeter of a triangle by using the three given XY coordinate points
//Made it by Nikita Volkov

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculate_distance(double, double, double, double);

int main()
{
    //Declaring variables
    double x1, y1;
    double x2, y2;
    double x3, y3;
    double side_1, side_2, side_3;
    double perimeter;

    //Getting the user input
    cout << "Enter the coordinates of the first vertex(separated by space):";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second vertex(separated by space):";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of the third vertex(separated by space):";
    cin >> x3 >> y3;

    //Logic
    side_1 = calculate_distance(x1, y1, x2, y2);
    side_2 = calculate_distance(x1, y1, x3, y3);
    side_3 = calculate_distance(x2, y2, x3, y3);
    perimeter = side_1 + side_2 + side_3;

    //Output
    cout << "Perimeter(3 decimal places): ";
    cout << setprecision(3) << fixed << perimeter << endl;
    cout << "Perimeter(5 decimal places): ";
    cout << setprecision(5) << fixed << perimeter << endl;

    return 0;
}

double calculate_distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}