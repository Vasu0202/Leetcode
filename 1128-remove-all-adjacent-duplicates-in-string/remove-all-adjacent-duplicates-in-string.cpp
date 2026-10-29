class Solution {
public:
    string removeDuplicates(string s) {
        // string ans="";
        // int i=0;

        // while(i<s.length()){
        //     if(ans.length()>0){
        //         if(ans[ans.length()-1]==s[i]){
        //             ans.pop_back();
        //         }
        //         else{
        //             ans.push_back(s[i]);
        //         }
        //     }
        //     else{
        //         ans.push_back(s[i]);
        //     }
        //     i++;
        // }
        // return ans;

        int n=s.size();
        stack<char> st;
        string res;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            if(st.top()==s[i]){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
   
};