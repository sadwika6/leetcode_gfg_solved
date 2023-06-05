//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        int c=0;
        Node* t1;
        t1=head;
        while(t1)
        {
            c+=1;
            t1=t1->next;
        }
        k=k%c;
        //cout << k << endl;
        if(k==0)
        {
            return head;
        }
        Node* temp=head;
        Node* temp1;
        while(temp and k>1)
        {
            //cout<<temp->data;
            temp=temp->next;
            k--;
        }
        //cout << temp->data;
        temp1=temp->next;
        temp->next = NULL;
        Node* p1;
        Node* p2;
        Node* p=NULL;
        p1=head;
        p2=head->next;
        //cout << head->data;
        while(p2)
        {
            p1->next=p;
            p=p1;
            p1=p2;
            p2=p2->next;
        }
        p1->next=p;
        Node* r = p1;
        //cout << r->data << endl;
        Node* shead=temp1;
        p=NULL;
        p1=shead;
        p2=shead->next;
        while(p2)
        {
            p1->next=p;
            p=p1;
            p1=p2;
            p2=p2->next;
        }
        p1->next=p;
        head->next=p1;
        //cout << r->data;
        p=NULL;
        p1=r;
        p2=r->next;
        while(p2)
        {
            p1->next=p;
            p=p1;
            p1=p2;
            p2=p2->next;
        }
        p1->next=p;
        //cout << p1->data;
        
        return p1;
    }
};
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends