/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 11th, 2018, 1:15 PM
 * Purpose:  Menu
 */

//System Libraries Here
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number function
#include <ctime>     //Time Library for random seed
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int probNum;
    
    //Loop on Menu and problems
    do{
    
        //Menu with input of choice
        cout<<"Choose from the following Menu"<<endl;
        cout<<"Problem 1"<<endl;
        cout<<"Problem 2"<<endl;
        cout<<"Problem 3"<<endl;
        cout<<"Problem 4"<<endl;
        cout<<"Problem 5"<<endl;
        cout<<"Problem 6"<<endl;
        cout<<"Type 1 to 6 only"<<endl<<endl;
        cin>>probNum;
    
        //Output the results
        switch(probNum){
            case 1: {
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape

    
    //Exit
    return 0;
                break;
            }    
            case 2: {
    //Declare all Variables Here
    char number[5];
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>number;
    
    //Histogram Here
    for(int i=3;i>=0;i--)
    {
        if(isdigit(number[i]))
        {
            cout<<number[i]<<" ";
            int n=number[i]-'0';
            while(n--)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    else
        {
            cout<<number[i]<<" ?"<<endl;
        }
    }       
    //Exit
    return 0;
                break;
            }
            case 3: {
    int num, den;
    double shares, whole, value;
    char choice;
    do 
    {
        //Input Variables
        cout << "Press return after entering a number.\n";
        cout << "Enter number of shares of stock owned:\n";
        cin >> shares;
        cout << "Enter the whole-dollar portion of the price:\n";
        cin >> whole;
        cout << "Enter the numerator value of stock portion:\n";
        cin >> num;
        cout << "Enter the denominaor value of stock portion:\n";
        cin >> den;
        
        //Output Calculations and Values
        cout << "Value of the user's holding of one stock:\n";
        cout << Value(num, den, shares, whole) << endl;        
        
        //Repeat Loop Choice
        cout << "\nPress Y or y to continue \n";
        cin >> choice;
    }   while (choice == 'Y' || choice == 'y');

    return 0;
                break;
            }
            case 4: {
    //Declare all Variables Here
    string package;
    float hours;
    float price;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C"<<endl;
    cin>>package;
    
    //Basic Charges
    if ((package == "A") || (package == "B") || (package == "C") ||
           (package == "a") || (package == "b") || (package == "c") )
    
    {
        cout << "The number of hours: ";
        cin >> hours;
    
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
    
    cout << "$" << price;
    
    
    //Output the cheapest package and the savings
    
        
    //Exit
    return 0;
                break;
            }
            case 5: {
    //Declare all Variables Here
    float payRate, payCheck;
    int hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if (hrsWrkd > 40)
    {
        payCheck = payRate*20 + payRate*20*1.5 + payRate*(hrsWrkd - 40)*2;
    }
    else if (hrsWrkd > 20)
    {
        payCheck = payRate*20 + payRate*(hrsWrkd - 20)*1.5;
    }
    else {
        payCheck = payRate*hrsWrkd;
    }
    
    //Output the check
    cout << "$" <<payCheck;
    
    //Exit
    return 0;
                break;
            }
            case 6: {


}
