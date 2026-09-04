class Solution {
public:
    int uniquePaths(int m, int n) {
        int i,j;

        vector<vector<int>> dp(n+1);

        for(int i =0 ;i<=n;i++){
            vector<int> t(m+1);
            dp[i]=t;
        }

        dp[n-1][m-1]=1;

        for(j=0; j<=m ;j++){
            dp[n][j]=0;
            dp[n-1][j]=1;
        }

        for(i=0; i<=n; i++){
            dp[i][m]=0;
            dp[i][m-1]=1;
        }

        // for(int j=0; j<m; j++) dp[n-1][j]=1;

        // for(int i=0; i<n; i++) dp[i][m-1]=1;
        
        for(int i=n-2 ; i>=0 ; i--){
            for(int j=m-2; j>=0 ; j--){
               
                dp[i][j]=dp[i+1][j]+dp[i][j+1];
            }
        }

        return dp[0][0];
    }
};