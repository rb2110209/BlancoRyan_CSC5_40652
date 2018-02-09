/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 22, 2018, 10:34 AM
 * Purpose: Write a program that will read in the number
of liters of gasoline consumed by the user’s car and the number of miles
traveled by the car and will then output the number of miles per gallon the
car delivered. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Universal Constant
const double lpg = 0.264179;

//Function Prototype
double mpg(int miles, int liters);

int main()
{
    int liters, miles;
    char choice;
    do 
    {
        //Input Variables
        cout << "Press return after entering a number.\n";
        cout << "Enter the number of liters of gasoline consumed by car:\n";
        cin >> liters;
        cout << "Enter the number of miles traveled by car:\n";
        cin >> miles;
        
        //Output Calculations and Values
        cout << "Miles per gallon the car delivered:\n";
        cout << mpg(miles, liters) << endl;
        
        //Repeat Loop Choice
        cout << "\nPress Y or y to continue \n";
        cin >> choice;
    }   while (choice == 'Y' || choice == 'y');

    return 0;
}

//Function definition
double mpg(int miles, int liters)
{
    double gallons;
    gallons = lpg*liters;
    return(miles/gallons);
}