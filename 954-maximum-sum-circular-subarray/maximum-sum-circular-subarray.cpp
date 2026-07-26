class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int a1=nums[0];
        int a2=nums[0];

        //a1
        int bestending1=nums[0];
        for(int i=1;i<n;i++){
            int v1=bestending1+nums[i];
            int v2=nums[i];

            bestending1=max(v1,v2);
            a1=max(a1,bestending1);
        }

        //a2
        int bestending2=nums[0];
        for(int i=1;i<n;i++){
            int v1=bestending2+nums[i];
            int v2=nums[i];

            bestending2=min(v1,v2);
            a2=min(a2,bestending2);
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int a3=sum-a2;
        
        if(a2==sum){
            return a1;
        }
        else{
            return max(a1,a3);
        }
    }
};