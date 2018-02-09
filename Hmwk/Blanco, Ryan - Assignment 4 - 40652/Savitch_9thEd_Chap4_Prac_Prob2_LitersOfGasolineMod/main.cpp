/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 22, 2018, 10:53 AM
 * Purpose: Modify your program from Practice Program 1 so that it will take 
input data for two cars and output the number of miles per gallon delivered by
each car 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Universal Constant
const double lpg = 0.264179;

//Function Prototype
double MPG1(int miles1, int liters1);
double MPG2(int miles2, int liters2);

int main()
{
    int liters1, miles1, liters2, miles2;
    double gallons1, mpg1, gallons2, mpg2;
    char choice;
    do 
    {
        //Input Variables
        cout << "Press return after entering a number.\n";
        cout << "Enter the number of liters of gasoline consumed by car 1:\n";
        cin >> liters1;
        cout << "Enter the number of miles traveled by car 1:\n";
        cin >> miles1;
        cout << "Enter the number of liters of gasoline consumed by car 2:\n";
        cin >> liters2;
        cout << "Enter the number of miles traveled by car 2:\n";
        cin >> miles2;
        
        //Output Calculations and Values
        mpg1 = MPG1(miles1, liters1);
        cout << "Miles per gallon the first car delivered:\n";
        cout << mpg1 << endl;
        mpg2 = MPG2(miles2, liters2);
        cout << "Miles per gallon the second car delivered:\n";
        cout << mpg2 << endl;
        
        //If statements
        if(mpg1 == mpg2) {cout << "Cars have equal efficiency." << endl;}
        if(mpg1 > mpg2) {cout << "Car 1 has better efficiency." << endl;}
        if(mpg1 < mpg2) {cout << "Car 2 has better efficiency." << endl;}
        
        //Repeat Loop Choice
        cout << "\nPress Y or y to continue \n";
        cin >> choice;
    }   while (choice == 'Y' || choice == 'y');

    return 0;
}

//Function definition
double MPG1(int miles1, int liters1)
{
    double gallons1;
    gallons1 = lpg*liters1;
    return(miles1/gallons1);
}

//Function definition
double MPG2(int miles2, int liters2)
{
    double gallons2;
    gallons2 = lpg*liters2;
    return(miles2/gallons2);
}