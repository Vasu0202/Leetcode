class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int low=0;

        int res=INT_MIN;

        unordered_map<char,int> freq;

        for(int high=0;high<n;high++){
            freq[s[high]]++;
            int k=high-low+1;

            while(freq.size()<k){
                freq[s[low]]--;
                if(freq[s[low]]==0){
                    freq.erase(s[low]);
                }
                low++;
                k=high-low+1;
            }
            int len=high-low+1;
            res=max(res,len);
        }
        if(s.size()==0){
            return 0;
        }
        else{
            return res;
        }
        
    }
};