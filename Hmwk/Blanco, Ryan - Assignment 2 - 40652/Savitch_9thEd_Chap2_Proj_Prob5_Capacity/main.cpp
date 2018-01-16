/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 12, 2018, 7:11 PM
 * Purpose:  Write a program that determines whether a meeting room is in 
violation of fire law regulations regarding the maximum room capacity. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    // Input Variables
    int capacity, attendees, invited;
    char choice;
    do 
    {
        //Input variable values
        cout << "Enter maximum room capacity: ";
        cin >> capacity;
        cout << "Enter number of people attending the meeting: ";
        cin >> attendees;
        
        if (attendees <= capacity)
        {
            cout << "Meeting can be legally held\n";
            if(capacity - attendees)
            {
                cout << capacity - attendees;
                cout << " additional people may legally attend the meeting.";
            }
        }   
        else
        {
            cout << "Meeting cannot be legally held" << endl;
            cout << attendees - capacity;
            cout << " people must be excluded in order to meet regulations.";
        }
        
        
        cout << "\n\nPress Y or y to continue \n";
        cin >> choice;
    }   while (choice == 'Y' || choice == 'y');

    return 0;
}