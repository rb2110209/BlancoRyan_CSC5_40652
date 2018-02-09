/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 28, 2018 5:00 PM
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string package;
    float hours;
    float price;
    double savings;

    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    if ((package == "A") || (package == "B") || (package == "C") ||
           (package == "a") || (package == "b") || (package == "c") )
    
    {
    
        if (hours <= 744) {
            if (package == "A" || package == "a") {
                if (hours > 20) {
                    price = 16.99+(hours - 20)*0.85 + 10*0.95;
                } 
                else if (hours > 10) {
                    price = 16.99+(hours - 10)*0.95;
                } else {
                    price = 16.99;
                }
            } else if (package == "B" || package == "b") {
                if (hours > 30) {
                    price = 26.99+10*0.74+(hours-30)*0.64;
                } else if (hours > 20) {
                    price = 26.99+(hours-20)*0.74;
                } else {
                    price = 26.99;
                }
            } else {
                price = 36.99;
            }
        } else {
            cout << "Invalid number of hours!";
        }
    } else {
        cout << "Invalid package!";
    }
    
    //Output the Charge
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "$" << price;
    
    //Output the cheapest package and the savings
    if (price > 36.99) {
        cout << " C ";
        savings = price - 36.99;
    }
    else if (price > 26.99) {
        cout << " B ";
        savings = price - 26.99;
    }
    else {
        cout << " A ";
        savings = 0;
    }
    
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "$" << savings;
        
    //Exit
    return 0;
}