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
Footer
© 2022 GitHub, Inc.
