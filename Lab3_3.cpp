/**
 * @file Lab3_3.cpp
 * @author Felix N. McGowan
 * @brief  Program to convert from second to days, 
           hours, minutes and seconds.
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 #include <iostream>
 using namespace std;

 main()
 {
    int days = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    int originalSec = 0;

    cout << "Enter number of seconds: ";
    cin >> originalSec;

    // Calculate seconds
    seconds = originalSec % 60;
    // cout << "Seconds = " << seconds << endl;

    // Calculate minutes
    minutes = originalSec / 60 % 60;
    // cout << "Minutes = " << minutes << endl;

    // Calculate hours
    hours = originalSec / 3600 % 24;
    // cout << "Hours = " << hours << endl;

    // Calculate days
    days = originalSec / 60 / 60 / 24;
    // cout << "Days = " << days << endl;

    cout << originalSec << " seconds is equivalent to " << days << " days "
        << hours << " hours " << minutes << " minutes and " << seconds << " seconds." << endl;
    return 0;
 }