class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     nums[i]=nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;

        int n = nums.size();
        vector<int> ans(n);
        int left=0;
        int right=n-1;
        int move=ans.size()-1;

        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                ans[move]=nums[left]*nums[left];
                left++;
            }
            else{
                ans[move]=nums[right]*nums[right];
                right--;
            }
            move--;
        }
        return ans;
    }
};