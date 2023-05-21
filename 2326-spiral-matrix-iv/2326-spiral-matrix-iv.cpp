/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>vc(m,vector<int>(n,-1));
        int t=0,b=m-1,l=0,r=n-1,i=0;
        while((t<=b and l<=r) and head!=NULL)
        {
            if(i%4==0 and l<=r and head!=NULL)
            {
                i++;
                for(int i=l;i<=r;i++)
                {
                    vc[t][i]=head->val;
                    head=head->next;
                    if(head==NULL)
                    {
                        break;
                    }
                }
                t++;
            }
            if(i%4==1 and t<=b and head!=NULL)
            {
                i++;
                for(int i=t;i<=b;i++)
                {
                    vc[i][r]=head->val;
                    head=head->next;
                    if(head==NULL)
                    {
                        break;
                    }
                }
                r--;
            }
            if(i%4==2 and l<=r and head!=NULL)
            {
                i++;
                for(int i=r;i>=l;i--)
                {
                    vc[b][i]=head->val;
                    head=head->next;
                    if(head==NULL)
                    {
                        break;
                    }
                }
                b--;
            }
            if(i%4==3 and t<=b and head!=NULL)
            {
                i++;
                for(int i=b;i>=t;i--)
                {
                    vc[i][l]=head->val;
                    head=head->next;
                    if(head==NULL)
                    {
                        break;
                    }
                }
                l++;
            }
        }
        return vc;
    }
};