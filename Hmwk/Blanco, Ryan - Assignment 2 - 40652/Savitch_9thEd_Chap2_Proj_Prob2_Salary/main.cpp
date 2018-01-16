/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 12, 2018, 6:22 PM
 * Purpose:  Write a program that takes an employee’s previous annual
salary as input, and outputs the amount of retroactive pay due the employee,
the new annual salary, and the new monthly salary.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    // Input Variables
    double previous_salary, salary_due, annual_salary, monthly_salary;
    // Percent pay increase
    const double pay_increase = 0.076; 
    char choice;
    do 
    {
        //Input variable values
        cout << "Enter previous annual salary: ";
        cin >> previous_salary;
        
        //Previous salary due calculation
        salary_due = previous_salary * pay_increase / 2;
        
        //Annual salary calculation
        annual_salary = previous_salary * (pay_increase + 1);
        
        //Monthly salary calculation
        monthly_salary = annual_salary / 12;
        
        //Output results for salary
        cout << "\nIf the previous annual salary was $" << previous_salary;
        cout << "\nThe previous salary due is $" << salary_due;
        cout << "\nThe new annual salary is $" << annual_salary;
        cout << "\nThe new monthly salary is $" << monthly_salary;
        
        cout << "\n\nPress Y or y to continue \n";
        cin >> choice;
    }   while (choice == 'Y' || choice == 'y');

    return 0;
}