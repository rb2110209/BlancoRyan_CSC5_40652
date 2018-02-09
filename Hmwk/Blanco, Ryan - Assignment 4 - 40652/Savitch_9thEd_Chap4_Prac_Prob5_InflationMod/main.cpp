/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 22, 2018, 11:59 AM
 * Purpose:  Enhance your program from the previous Practice Program by having 
it also print out the estimated price of the item in one and in two years
from the time of the calculation
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Prototype Function
double Inflation(double price_year, double price_today);
double Price_Inf(double price_today, double price_year, int years);

int main()
{
    double price_year, price_today, inflation, price_inf, cost_inc;
    int years;
    char choice;
    do 
    {
        //Input Variables
        cout << "Press return after entering a number.\n";
        cout << "Enter the price of an item 1 year ago:\n$";
        cin >> price_year;
        cout << "Enter the price of an item today:\n$";
        cin >> price_today;
        cout << "Enter number of years for estimated price:\n";
        cin >> years;
        
        //Output Calculations and Values
        cout << "The rate of inflation is:\n";
        cout << Inflation(price_year, price_today) << "%" << endl;
        cout << "Price of item after years entered:\n$";
        cout << Price_Inf(price_today, price_year, years) << endl;
        
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

//Function Definition
double Price_Inf(double price_today, double price_year, int years)
{
    double price_inf, cost_inc, inflation;
    inflation = (price_today-price_year)/price_year;
    cost_inc = inflation*price_today*years;
    price_inf = price_today + cost_inc;
    return(price_inf);
}