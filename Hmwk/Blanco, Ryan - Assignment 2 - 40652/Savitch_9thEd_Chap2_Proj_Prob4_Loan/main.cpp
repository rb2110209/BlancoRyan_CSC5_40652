/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 12, 2018, 6:49 PM
 * Purpose:   Write a program that will take three inputs: the
amount the consumer needs to receive, the interest rate, and the duration
of the loan in months.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    // Input Variables
    double loan, interest_rate, months, amount;
    double monthly_payment, face_duration, face_interest_rate;
    char choice;
    do 
    {
        //Input variable values
        cout << "Enter loan amount needed: ";
        cin >> loan;
        cout << "Enter interest rate in percent: ";
        cin >> interest_rate;
        cout << "Enter loan duration in months: ";
        cin >> months;
        
        //Calculations
        face_interest_rate = interest_rate / 100;
        face_duration = months / 12;
        amount = loan / (1 - face_interest_rate * face_duration);
        monthly_payment = amount / months;
        
        //Output results for salary
        cout << "\nIf the loan amount needed is $" << loan;
        cout << "\nThe amount to request is $" << amount;
        cout << "\nMonthly payments will be $" << monthly_payment;
        
        cout << "\n\nPress Y or y to continue \n";
        cin >> choice;
    }   while (choice == 'Y' || choice == 'y');

    return 0;
}