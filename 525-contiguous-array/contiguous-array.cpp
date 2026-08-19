class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int zero=0;
        int one=0;
        unordered_map<int,int> f;
        int res=0;

        for(int i=0; i<n; i++){
            if(nums[i]==0){
                zero++;
            }
            if(nums[i]==1){
                one++;
            }

            int diff=zero-one;

            if(diff==0){
                res=max(res,i+1);
                continue;
            }
            else if(f.find(diff)==f.end()){
                f[diff]=i;
            }
            else{
                int index=f[diff];
                int len=i-index;
                res=max(res,len);
            }
        }
        return res;
        
    }
};