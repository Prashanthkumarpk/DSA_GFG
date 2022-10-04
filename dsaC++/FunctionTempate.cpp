/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//Function template 
template <typename T >

T arrMax(T arr[],int n)
{
    
    T max=arr[0];
    
    for(int i=0;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
return max;

    
}

int main()
{
    int arr[]={8,10,100,50};
    
    cout<<"Maximum element in an array is : "<<endl;
    cout<<arrMax<int>(arr,4)<<endl;
    

    return 0;
}