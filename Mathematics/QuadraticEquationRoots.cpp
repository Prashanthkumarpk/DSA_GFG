class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector<int> sol;
        
      double  d=abs(b*b-4*a*c);
      //cout<<d;
        
        if (d<0) sol.push_back(-1);
        
        if (d>=0){
            
            double r1=(-b+sqrt(d))/(2*a);
            double r2=(-b-sqrt(d))/(2*a);
            
            if (r1>0){
                sol.push_back(r1);
                sol.push_back(r2);
            }
            else {
                sol.push_back(r2);
                sol.push_back(r1);
            }
            
        }
        return sol;
    }
    
};

input:
a = 1
b = -7
c = 12
Output: 4 3
Explanation: Roots of equation 
x2 - 7x + 12 are 4 and 3.
