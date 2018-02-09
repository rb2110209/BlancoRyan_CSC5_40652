/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 22, 2018, 11:48 AM
 * Purpose:  Write a program to gauge the rate of inflation for the past year
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Prototype Function
double Inflation(double price_year, double price_today);

int main()
{
    double price_year, price_today, inflation;
    char choice;
    do 
    {
        //Input Variables
        cout << "Press return after entering a number.\n";
        cout << "Enter the price of an item 1 year ago:\n$";
        cin >> price_year;
        cout << "Enter the price of an item today:\n$";
        cin >> price_today;
        
        //Output Calculations and Values
        cout << "The rate of inflation is:\n";
        cout << Inflation(price_year, price_today) << "%" << endl;        
        
        //Repeat Loop Choice
        cout << "\nPress Y or y to continue \n";
        cin >> choice;
    }   while (choice == 'Y' || choice == 'y');

    return 0;
}

//Function Definition
double Inflation(double price_year, double price_today)
{
    double inflation;
    inflation = (price_today-price_year)*100/price_year;
    return(inflation);
}