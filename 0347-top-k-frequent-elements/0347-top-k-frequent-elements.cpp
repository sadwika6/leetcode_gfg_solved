class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>vc;
        for(auto it:mp)
        {
            vc.push_back(make_pair(it.second,it.first));
        }
        sort(vc.begin(),vc.end(),greater<pair<int,int>>() );
        vector<int>res;
        int s=0;
        for(int i=0;i<k;i++)
        {
            
            res.push_back(vc[i].second);
            
        }
        return res;
    }
};