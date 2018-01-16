/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 7, 2018 3:44 PM
 * Purpose:  Compile and run the program from Display 1.8
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    int number_of_pods, peas_per_pod, total_peas;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    
    total_peas = number_of_pods * peas_per_pod;
    
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";

    return 0;
}

