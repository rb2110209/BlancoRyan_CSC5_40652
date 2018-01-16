/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 7, 2018 3:44 PM
 * Purpose:  Compile and run the program from Display 1.8 modified
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    int width, length, total_length;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the width of rectangle:\n";
    cin >> width;
    cout << "Enter the length of rectangle:\n";
    cin >> length;
    
    total_length = 2 * (width + length);
    
    cout << "If you have an area ";
    cout << width;
    cout << " feet wide\n";
    cout << "and ";
    cout << length;
    cout << " feet long, then\n";
    cout << "you have ";
    cout << total_length;
    cout << " feet length of fence.\n";

    return 0;
}

