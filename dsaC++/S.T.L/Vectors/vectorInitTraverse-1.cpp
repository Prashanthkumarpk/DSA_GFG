/******************************************************************************
1.Creation
2.Traverse
3.Modify using &x
NOTES:
1.Traversing-1,here x is a copy of vector we cant modiy v using x 
      to modify place &x*
2.v1[i] does not check array index out of bond to check use v1.at(i)
       using v[i] may lead to runtime error some times  

*******************************************************************************/
#include <iostream>
#include<vector> ;

using namespace std;

int main()
{ 
    //1.Creation &initialisation v1
    
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
   
   /* Traversing-1,here x is a copy of vector we cant modiy v using x 
      to modify place &x*/
      
    for(int x:v1) cout<<x<<" ";
  
  for (int &x: v1) x=6;  
    
    cout<<"Traversing of v1 2nd method ";
    for(int i=0;i<v1.size();i++) cout<<v1[i]<<" ";
    
    /* v1[i] does not check array index out of bond to check use v1.at(i)
       using v[i] may lead to runtime error some times */
     //Another traverse method
      
      for(auto it=v1.begin();it!=v1.end();it++) cout<<(*it)<<" ";
    
    
    return 0;
}
