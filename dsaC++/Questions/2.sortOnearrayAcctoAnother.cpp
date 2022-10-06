/******************************************************************************

You are given two arrays a[] (integer) and b[] (char). The ith value of a[] corresponds to the ith value of b[]. Sort the array b[] with respect to a[].

Example 1:

Input:
a[] = {3, 1, 2}
b[] = {'G', 'E', 'K'}
Output:
E K G
Explanation: Here 3 corresponds to G,
1 corresponds to 'E', 2 corresponds to 'K'
*******************************************************************************/


#include <iostream>
#include<algorithm>
using namespace std;

void sortArray(int a[], char b[], int n){
    
    pair<int,char> p[n];
    
    for(int i=0;i<n;i++){
        p[i]={a[i],b[i]};
    }
    sort(p,p+n);
    
    for(int i= 0;i<n;i++){
        cout<<p[i].second<<" ";
    }
    
}


int main()
{
   int  a[] = {3, 1, 2} ;
   char b[] = {'G', 'E', 'K'};
   sortArray(a,b,3);
   

    return 0;
}
