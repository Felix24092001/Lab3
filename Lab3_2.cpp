/**
 * @file Lab3_2.cpp
 * @author Felix N. McGowan
 * @brief 
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;

int main ()
{
    double length = 0.0,  // Length of a room in feet
           width = 0.0,   // Width of a room in feet
           area = 0.0;        // Area of the room in sq. ft.

    // Get the room dimensions
    cout << "Enter room length (in feet): ";
    cin  >> length;
    cout << "Length = " << length << endl;

    cout << "Enter room width (in feet): ";
    cin  >> width;
    cout << "Width = " << width << endl;

    // Compute and display the area
    area = length * width;
    cout << "The area of the room is " << area 
         << " square feet." << endl;

    return 0;
}