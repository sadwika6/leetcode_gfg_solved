class Solution {
public:
    int climbStairs(int n) {
        if(n<=3)
        {
            return n;
        }
        int a=1;
        int b=2;
        int t,t1;//3
        for(int i=3;i<=n;i++)
        {
            t=a+b;
            a=b;//2
            b=t;//3
            //cout<<a<<" "<<b<<" "<<t<<endl;
        }
        return b;
    }
};