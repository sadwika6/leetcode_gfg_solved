class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int>mp;
        string temp;
        vector<string>d;
        for(int i=0;i<strs.size();i++)
        {
            temp=strs[i];
            sort(temp.begin(),temp.end());
            d.push_back(temp);
            mp[temp]++;
            //cout<<d[i]<<endl;
        }
        vector<vector<string>>res;
        vector<string>vc;
        for(auto it:mp)
        {
            string x;
            for(int i=0;i<strs.size();i++)
            {
                if(d[i]==it.first)
                {
                    vc.push_back(strs[i]);
                }
            }
            res.push_back(vc);
            vc.clear();
        }
        return res;
    }
};