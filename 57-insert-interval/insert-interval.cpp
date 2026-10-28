class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& res) {
        sort(res.begin(), res.end());
        vector<vector<int>> res1;
        int start1=res[0][0];
        int end1=res[0][1];

        for(int i=1; i<res.size();i++){
            int start2=res[i][0];
            int end2=res[i][1];

            if(end1>=start2){
                start1=start1;
                end1=max(end1,end2);
                continue;
            }

            res1.push_back({start1,end1});

            start1=start2;
            end1=end2;
        }

        res1.push_back({start1,end1});
        return res1;
        
    }

    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.empty()) return {newInterval};
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        bool insert=false;
        int start1=intervals[0][0];
        int end1=intervals[0][1];
        for(int i=0;i<intervals.size();i++){
            if(insert==false && intervals[i][0]>=newInterval[0]){
                res.push_back(newInterval);
                insert=true;
            }
            res.push_back(intervals[i]);
            if(!insert) res.push_back(newInterval);
        }
        
        return merge(res);
    }
};