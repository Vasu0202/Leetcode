class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        // int i=0;
        // for(int j=i+1;j<n;j++){
        //     if(nums[j]!=0 && nums[i]==0){
        //         swap(nums[i],nums[j]);
        //         i++;
        //     }
           
        // }

        // vector<int> temp;
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0){
        //         temp.push_back(nums[i]);
        //     }
        // }

        // for(int i=0;i<temp.size();i++){
        //     nums[i]=temp[i];
        // }

        // for(int i=temp.size();i<n;i++){
        //     nums[i]=0;
        // }

        int j=-1;
        

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) return;

        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        
    }
};