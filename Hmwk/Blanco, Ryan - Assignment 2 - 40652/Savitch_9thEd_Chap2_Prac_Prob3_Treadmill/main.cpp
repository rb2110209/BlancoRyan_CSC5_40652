/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 12, 2018, 3:50 PM
 * Purpose:  Write a program that starts with a quantity in mph and converts the
quantity into minutes and seconds per mile. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    double miles_per_hour, minutes_per_mile, seconds;
    int minutes;
    {
        cout << "Enter treadmill speed in miles per hour\n";
        cin >> miles_per_hour;
        minutes_per_mile = 60/miles_per_hour;
        minutes = static_cast<int>(minutes_per_mile);
        seconds = (minutes_per_mile - minutes)*60;
        
        cout << "Pace is " << minutes << " minutes and ";
        cout << seconds << " seconds per mile";
        
    }
    return 0;
}
