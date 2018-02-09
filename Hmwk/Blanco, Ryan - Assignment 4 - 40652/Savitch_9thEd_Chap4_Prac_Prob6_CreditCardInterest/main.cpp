/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 22, 2018, 12:18 PM
 * Purpose:  Enhance your program from the previous Practice Program by having 
it also print out the estimated price of the item in one and in two years
from the time of the calculation
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    double iBalance, intRate, intDue;
    int months;
    char choice;
    do 
    {
        //Input Variables
        cout << "Press return after entering a number.\n";
        cout << "Enter the initial balance:\n$";
        cin >> iBalance;
        cout << "Enter the interest rate:\n";
        cin >> intRate >> "%";
        cout << "Enter number of months for which interest must be paid:\n";
        cin >> months;
        
        //Output Calculations and Values
        cout << "Interest due:\n";
        cout << intDue;
        
        //Repeat Loop Choice
        cout << "\nPress Y or y to continue \n";
        cin >> choice;
    }   while (choice == 'Y' || choice == 'y');

    return 0;
}