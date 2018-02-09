/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on February 4, 2018, 10:04 PM
 * Purpose: Write a function named firstLast2 that takes as input an array of 
integers and an integer that specifies how many entries are in the array.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist


//Function Prototype
bool firstLast2(int in[], int len);

//Function Code
bool firstLast2(int in[], int len)
{
    if(in[0] == 2 || in[len-1] == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool firstLast2(int in[], int len);
void printExistanceOfTwo(int in[], int len);
void printArray(int in[], int len);

int main()
{
    int array1[5] = {2,0,4,1,5};
    int array2[6] = {1,3,4,5,6,2};
    int array3[7] = {3,1,4,2,8,6,9};
    int array4[4] = {1,3,4,5};
    printArray(array1,5);
    printExistanceOfTwo(array1,5);
    printArray(array2,6);
    printExistanceOfTwo(array2,6);
    printArray(array3,7);
    printExistanceOfTwo(array3,7);
    printArray(array4,4);
    printExistanceOfTwo(array4,4);
    return 0;
}

void printArray(int in[], int len)
{
    cout << "\nElements in the array are: \n";
    for(int i=0;i<len;i++)
    {
        cout << in[i] << " ";
    }
    cout << endl;
}

void printExistanceOfTwo(int in[], int len)
{
    if(firstLast2(in,len))
        cout << "Above array contains 2 either at beginning of end of array\n";
    else
        cout << "Above array does not contain 2 in either at beginning or end\n";
}