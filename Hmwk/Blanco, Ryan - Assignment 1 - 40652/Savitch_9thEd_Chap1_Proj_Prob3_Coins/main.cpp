/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 7, 2018 3:44 PM
 * Purpose:  Enter a number of quarters, dimes,
and nickels and then outputs the monetary value of the coins in cents
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    int quarters, dimes, nickels, sum;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of quarters:\n";
    cin >> quarters;
    cout << "Enter the number of dimes:\n";
    cin >> dimes;
    cout << "Enter the number of nickels:\n";
    cin >> nickels;
    sum = 25 * quarters + 10 * dimes + 5 * nickels;
    
    cout << "If you have ";
    cout << quarters;
    cout << " quarters\n";
    cout << "and ";
    cout << dimes;
    cout << " dimes, and \n";
    cout << nickels;
    cout << " nickels, then you have ";
    cout << sum;
    cout << " cents.\n";

    return 0;
}

