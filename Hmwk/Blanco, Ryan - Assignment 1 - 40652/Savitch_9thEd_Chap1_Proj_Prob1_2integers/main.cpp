/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 7, 2018 3:44 PM
 * Purpose:  Read in two integers and then output both their
sum and their product
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    int number1, number2, sum, product;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the first number:\n";
    cin >> number1;
    cout << "Enter the second number:\n";
    cin >> number2;
    sum = number1 + number2;
    product = number1 * number2;
    cout << "Sum of the two numbers is ";
    cout << sum;
    cout << "\n";
    cout << "Product of the two numbers is ";
    cout << product;
    cout << "\n";
    cout << "This is the end of the program.\n";

    return 0;
}

