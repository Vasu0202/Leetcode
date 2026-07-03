class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int res =0;
        int diff = INT_MAX;

        for(int i=0; i<n-2 ;i++){
            int left=i+1;
            int right=n-1;

            while(left<right){
                int total=nums[i]+nums[left]+nums[right];
                int d= abs(total-target);

                if(d<diff){
                    diff=d;
                    res=total;
                }

                if(target==total){
                    return res;
                }

                else if(target>total){
                    left++;
                }
                else{
                    right--;
                }

            }  
        }
        return res;
    }
};