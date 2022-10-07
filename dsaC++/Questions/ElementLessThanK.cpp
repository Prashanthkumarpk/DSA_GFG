/******************************************************************************
Element less than K

*******************************************************************************/
#include <iostream>
#include<vector>

using namespace std;

vector<int> list_less_than_k(vector<int> a,int n,int k)
{
    vector<int> v1;
    
    for(int x : a ){
        
        if(x<k) v1.push_back(x);
    }
    
    return v1;
    
}

int main()
{
   vector<int> v{1,2,3,4,5};
   vector<int> v1;
   v1=list_less_than_k(v,5,5);
   
   for(int x : v1){
       cout<<x<<" ";
   }
   return 0;
}
