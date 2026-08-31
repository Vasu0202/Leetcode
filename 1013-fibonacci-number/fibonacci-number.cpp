class Solution {
public:

    unordered_map<int,int> dp;

    int fib(int n) {
        // if(n==0 || n==1){
        //     return n;
        // }

        // //dp find
        // if(dp.find(n)!=dp.end()){
        //     return dp[n];
        // }

        // int ans=fib(n-1)+fib(n-2);
        // dp[n]=ans;
        // return ans;

        if(n==0 || n==1) return n;
        vector<int> dp(n+1);

        dp[0]=0;
        dp[1]=1;

        for(int i=2; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }

        return dp[n];
    }
};