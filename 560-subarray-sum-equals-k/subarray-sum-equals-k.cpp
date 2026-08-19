class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int> f;
        f[0]=1;
        int res=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int freq=f[sum-k];
            res+=freq;
            f[sum]++;
        }
        return res;
        
    }
};