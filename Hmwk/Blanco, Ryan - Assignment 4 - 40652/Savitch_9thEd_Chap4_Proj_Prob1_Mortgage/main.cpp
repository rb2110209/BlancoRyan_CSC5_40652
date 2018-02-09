/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 22, 2018, 3:11 PM
 * Purpose: Write a program that computes the annual after-tax cost of a new 
house for the first year of ownership
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Function Prototype
float annualMortgage(float);
float taxSavings(float);

//Main
int main()
{
    float housePrice, downPayment, iBalance;
    char choice;
    
    cout << "Annual after-tax cost of home ownership" << endl;
    
    do
    {
        cout << "Cost of house: \n$";
        cin >> housePrice;
        cout << "Down payment amount: \n$";
        cin >> downPayment;
        
        iBalance = housePrice - downPayment;
        
        cout << "Annual after-tax cost of home ownership: \n$";
        cout << annualMortgage(iBalance)-taxSavings(iBalance) << endl;
        cout << "Initial loan balance: \n$" << iBalance << endl;
        cout << "Annual mortgage cost: \n$" << annualMortgage(iBalance) << endl;
        cout << "Tax savings each year: \n$" << taxSavings(iBalance) << endl;
        
        //Repeat Loop Choice
        cout << "\nPress Y or y to continue \n";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    
    return 0;
}

//function definition
float annualMortgage(float iBalance)
{
    float cost;
    cost = iBalance*0.09;
    return cost;
}

//function definition
float taxSavings(float iBalance)
{
    float taxSavings;
    taxSavings = iBalance*0.021;
    return taxSavings;
}