/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on February 4, 2018, 10:53 PM
 * Purpose:  Write the function lookupName so the code properly looks up and 
returns the phone number for the input target name
 */

//System Libraries
#include <iostream>
using namespace std;

string lookUpName(string target, string names[], string phones[], int len);

int main()
{
    string names[] = {"Michael Myers","Ash Williams","Jack Torrance",
    "Freddy Krueger"};
    string phoneNumbers[] = {"333-8000","333-2323","333-6150","339-7970"};
    string targetName, targetPhone;
    char c;
    do
    {
        cout << "Enter a name to find the corresponding phone number\n";
        getline(cin, targetName);
        targetPhone = lookUpName(targetName,names,phoneNumbers,4);
        if(targetPhone.length()>0)
            cout << "The number is: " << targetPhone << endl;
        else
            cout << "Name not found" << endl;
        cout << "Look up another name? (y/n)" << endl;
        cin >> c;
        cin.ignore();
    } while (c == 'y' || c == 'Y');
    return 0;
}

string lookUpName(string target, string names[], string phones[], int len)
{
    string number = "";
    for(int i=0;i<len;i++)
    {
        if(target == names[i])
            number = phones[i];
    }
    return number;
}