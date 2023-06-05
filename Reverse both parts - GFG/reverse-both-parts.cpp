//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList()
{
    int n; // length of link list
    scanf("%d ", &n);

    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
//User function Template for C++

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/


class Solution
{
public:
   
    Node *reverse(Node *head, int k)
    {
        // code here
        Node *temp=NULL;
        Node *p1,*p2;
        p1=head;
        p2=p1->next;
        int c=1;
        while(c<k)
        {
            p1->next=temp;
            temp=p1;
            p1=p2;
            p2=p2->next;
            c+=1;
        }
        p1->next=temp;
        Node* mhead=p1;
        Node *temp1=NULL;
        p1=p2;
        p2=p1->next;
        while(p2)
        {
            p1->next=temp1;
            temp1=p1;
            p1=p2;
            p2=p2->next;
        }
        p1->next=temp1;
        //cout << mhead->data;
        head->next=p1;
        // temp1=NULL;
        // p1=mhead;
        // p2=p1->next;
        // while(p2)
        // {
        //     //cout << "hi";
        //     p1->next=temp1;
        //     temp1=p1;
        //     p1=p2;
        //     p2=p2->next;
        // }
        // p1->next=temp1;
        return mhead;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        struct Node *head = inputList();
        int k;
        cin >> k;

        Solution obj;
        Node *res = obj.reverse(head, k);

        printList(res);
    }
}
// } Driver Code Ends