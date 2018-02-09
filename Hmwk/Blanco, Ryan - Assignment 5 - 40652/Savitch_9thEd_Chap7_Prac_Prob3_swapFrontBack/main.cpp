/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on February 4, 2018, 10:47 PM
 * Purpose: Write a function named swapFrontBack that takes as input an array 
of integers and an integer that specifies how many entries are in the array
 */

//System Libraries
#include <iostream>
using namespace std;

void swapFrontBack(int array[],int size)
{   
//checks array size is empty or not
    if(size == 0)
    {
        cout << "Array is empty\n";
    }
    else
    {
        //swapping the array
        int temp;
        temp = array[size- 1];
        array[size-1] = array[0] ;
        array[0] = temp;
        //prints the array
        for(int i=0;i<5;i++)
            {
            cout << array[i]<< " ";
            }
        cout << endl;
    }
}

int main()
{
    int arr[5] = {1000, 2, 3, 17, -55};
    // call function with parameter as array and size
    swapFrontBack(arr,5);
return 0;
}