/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int size_array = sizeof(a)/sizeof(int);
    for(int i=0;i<size_array;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>> k;
    
    int c=0,d=0;
    
    for(int i=0;i<size_array;i++)
    {
        if(a[i]==k && a[i-1]!=k)
        {
            c=i;
        }
        if(a[i]==k && a[i+1]!=k)
        {
            d=i;
        }
        
    }
    cout<< c<< d;
   //cout<<"Hello World";
   //i/p:-1,1,1,2,2,2,2,2,3,9,9,9 k=2 o/p:- 3,7 k's starting and ending index;
   
    return 0;
}
