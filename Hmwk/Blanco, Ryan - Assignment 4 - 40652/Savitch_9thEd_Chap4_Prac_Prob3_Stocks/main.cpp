/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 22, 2018, 10:53 AM
 * Purpose:  Write a program that computes the value of the
user’s holding of one stock
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Prototype Function
double Value(int num, int den, double shares, double whole);

//Main
int main()
{
    int num, den;
    double shares, whole, value;
    char choice;
    do 
    {
        //Input Variables
        cout << "Press return after entering a number.\n";
        cout << "Enter number of shares of stock owned:\n";
        cin >> shares;
        cout << "Enter the whole-dollar portion of the price:\n";
        cin >> whole;
        cout << "Enter the numerator value of stock portion:\n";
        cin >> num;
        cout << "Enter the denominaor value of stock portion:\n";
        cin >> den;
        
        //Output Calculations and Values
        cout << "Value of the user's holding of one stock:\n";
        cout << Value(num, den, shares, whole) << endl;        
        
        //Repeat Loop Choice
        cout << "\nPress Y or y to continue \n";
        cin >> choice;
    }   while (choice == 'Y' || choice == 'y');

    return 0;
}

//Function Definition
double Value(int num, int den, double shares, double whole)
{
    double value;
    value = (whole/shares) + (num/(den*shares));
    return(value);
}