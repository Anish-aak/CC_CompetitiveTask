class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(begin(intervals), end(intervals));
        vector<vector<int>> fin;
        vector<int> t1, t2;
        t1=intervals[0];
        for(int i=1; i<intervals.size(); i++)
        {
            t2=intervals[i];
            if(t2[0]<=t1[1])
                t1[1]=max(t1[1], t2[1]);
            else
            {
                fin.push_back(t1);
                t1=intervals[i];
            }
            //cout<<i<<endl;
        }
        fin.push_back(t1);
        return fin;
    }
};
