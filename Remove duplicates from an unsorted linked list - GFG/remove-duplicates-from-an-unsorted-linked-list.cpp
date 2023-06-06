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

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


// } Driver Code Ends
/*
The structure of linked list is the following

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
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        // Node* temp=head;
        // Node* temp1;
        // Node* prev;
        // while(temp)
        // {
        //     temp1=temp;
        //     prev=temp;
        //     while(temp1->next)
        //     {
        //         if(temp->data == temp1->next->data)
        //         {
        //             temp1->next=temp1->next->next;
        //         }
        //         else
        //         {
        //             temp1=temp1->next;
        //             //prev=prev->next;
        //         }
        //     }
        //     temp=temp->next;
        // }
        // return head;
        unordered_map<int,int>s;
        vector<int>vc;
        Node* temp = head;
        while(temp)
        {
            s[temp->data]++;
            if(s[temp->data] == 1)
            {
                vc.push_back(temp->data);
            }
            temp=temp->next;
        }
        temp=head;
        Node* prev=NULL;
        int i=0;
        //cout << head->data;
        for(auto it:vc)
        {
            //cout << temp->data << endl;
            temp->data = it;
            prev=temp;
            //cout << temp->data << endl;
            temp=temp->next;
        }
        prev->next=NULL;
        return head;
    }
};


//{ Driver Code Starts.

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}
// } Driver Code Ends