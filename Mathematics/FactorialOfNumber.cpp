class Solution{
    public:
        // Complete this function
    long long factorial(int N) {
        // Your code here
        if (N==1 ||N==0) return 1;
        else return N*factorial(N-1);
        }
  
  Given a positive integer N. The task is to find factorial of N.
 
