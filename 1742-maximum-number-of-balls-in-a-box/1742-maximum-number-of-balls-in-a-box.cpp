class Solution {
public:
    int countsum(int n)
    {
        int s=0;
        while(n>0)
        {
            int r=n%10;
            s+=r;
            n=n/10;
        }
        return s;
    }
    int countBalls(int l, int h) {
        map<int,int>mp;
        int k;
        for(int i=l;i<=h;i++)
        {
            k=countsum(i);
            mp[k]++;
        }
        int m=0;
        for(auto it:mp)
        {
            if(it.second > m)
            {
                m=it.second;
            }
        }
        return m;
    }
};