/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on February 4, 2018, 10:33 PM
 * Purpose: Write a function named countNum2s that takes as input an array of 
integers and an integer that specifies how many entries are in the array
 */

//System Libraries
#include<iostream>
using namespace std;

int countNums2(int b[],int n)
{
   int count1=0;
   for(int i=0;i<n;i++)
   {
       //checking for 2
       if(b[i]==2)
           // if found increment count
           count1++;

   }
  
   return count1;
}
int main()
{
   int a[100],n;
   int ch=1;
   // Repeating for different length of array and 2
   while(ch==1)
   {
       cout<<"Enter the number of elements in the array"<<endl;
       cin>>n;
       // Entering elements to array
       cout<<"Enter the elements in array"<<endl;
       for(int i=0;i<n;i++)
           cin>>a[i];
       //calling function to find number of 2
       int y=countNums2(a,n);
       cout<<"Number of 2 in the array = " << y <<endl;
       //if need to continue give 1 else 0
       cout<<"Do you want to continue 0/1";
       cin>>ch;
   }
   return 0;
}