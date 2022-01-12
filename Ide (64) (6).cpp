class Solution
{  
    
    int solve(int n, vector<int> &dp) {  
       int mod=1e9+7;
        if(n<=1)
        return n;  
         if(n==2) 
          return n;
         if(dp[n]!=-1) 
            return  dp[n];
             return  dp[n]=((solve(n-1,dp))%mod+(solve(n-2,dp))%mod)%mod; 
}
        
    public:
    int countWays(int n)
    {   
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};