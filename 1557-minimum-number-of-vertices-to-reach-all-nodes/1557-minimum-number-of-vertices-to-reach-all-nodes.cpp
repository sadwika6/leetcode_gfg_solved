class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[i]=0;
        }
        for(int i=0;i<edges.size();i++)
        {
            mp[edges[i][1]]++;
        }
        for(auto it:mp)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        vector<int>vc;
        for(auto it:mp)
        {
            if(it.second == 0)
            {
                vc.push_back(it.first);
            }
        }
        return vc;
    }
};