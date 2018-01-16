/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 7, 2018 3:44 PM
 * Purpose:   Enter a time in seconds and then
outputs how far an object would drop if it is in freefall for that length of
time
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    int distance, acceleration, time;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the time in seconds:\n";
    cin >> time;
    acceleration = 32;
    distance = 0.5 * acceleration * time * time;
    
    cout << "If the time was \n";
    cout << time;
    cout << " seconds, then the distance fallen is \n";
    cout << distance;
    cout << " feet.\n";
    
    return 0;
}

