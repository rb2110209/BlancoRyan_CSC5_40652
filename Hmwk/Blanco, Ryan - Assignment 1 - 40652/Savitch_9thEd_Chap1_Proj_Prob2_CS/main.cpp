/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 7, 2018 3:44 PM
 * Purpose:  Print out “C S !” in large block letters inside a border
of *s followed by two blank lines then the message Computer Science is
Cool Stuff
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    cout << "*************************************************\n\n";
    cout << "          C C C               S S S S      !!    \n";
    cout << "        C       C           S         S    !!    \n";
    cout << "       C                   S               !!    \n";
    cout << "      C                     S              !!    \n";
    cout << "      C                      S S S S       !!    \n";
    cout << "      C                              S     !!    \n";
    cout << "       C                              S    !!    \n";
    cout << "        C       C          S         S           \n";
    cout << "          C C C              S S S S       00    \n\n";
    cout << "*************************************************\n\n";
    cout << "           Computer Science is Cool Stuff!!!     \n";
    return 0;
}

