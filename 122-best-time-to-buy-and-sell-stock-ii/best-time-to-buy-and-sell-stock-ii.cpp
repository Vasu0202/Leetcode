class Solution {
public:

    int fun(vector<int>& prices, int n, int i , int k , vector<vector<int>>& dp){
        if(i==n) return 0;

        if(dp[i][k]!=-1) return dp[i][k];

        //buy
        if(k==2){
            int c1=fun(prices,n,i+1,k-1,dp) - prices[i];
            int c2=fun(prices,n,i+1,k,dp);
            return dp[i][k]=max(c1,c2);
        }

        else{
            int c1=fun(prices,n,i+1,2,dp) + prices[i];
            int c2=fun(prices,n,i+1,k,dp);
            return dp[i][k]= max(c1,c2);
        }
    }

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int k=2;
        int i;
        vector<vector<int>> dp(n+1);

        for(int i=0; i<n;i++){
            vector<int> t(k+1,-1);
            dp[i]=t;
        }

        return fun(prices,n,0,k,dp);
     
        
    }
};