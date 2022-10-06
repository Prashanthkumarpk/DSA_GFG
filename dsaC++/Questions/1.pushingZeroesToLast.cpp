/******************************************************************************

A chocolate factory is packing chocolates into the packets. The chocolate packets here
represent an array arrt of N number of integer values. The task is to find the empty packets(0) of
chocolate and push it to the end of the conveyor belt(array).
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n,j=0;
    cout<<"Enter n";
    cin>>n;
    int a[n]={0};
    
    cout<<"Enter array"<<" ";
    
    for (int i=0;i<n;i++)
    {
       cin>>a[j];
       if(a[j]!=0)j++;
       
    }
    cout<<"array";
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
   

    return 0;
}
