class Solution{
    public:
        
    int digitsInFactorial(int N)
    {
        double sum=0.0; 
        for(int j=1;j<=N;j++)
        {
            //sum stores log(j) + log(j+1) + ... + log(N) 
            sum+=log10(j); 
        }
        return(1+floor(sum));
    }
};

Input: N = 5
Output: 3
Explanation: Factorial of 5 is 120.
Number of digits in 120 is 3 (1, 2, and 0)
