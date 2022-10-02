/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector <int> v= {10,20,30,40,50};
    vector <int>:: iterator i=v.begin();
    //auto i can be used instead
    cout<<(*i)<<" ";
    i++;
    
    cout<<(*i)<<" "<<endl;
    
    i=v.end();
    i--;
    cout<<(*i)<<endl;

    return 0;
}