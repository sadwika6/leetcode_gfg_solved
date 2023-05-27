//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    struct Node* reverse(struct Node *head)
    {
        struct Node* prev=NULL;
        struct Node* curr=head;
        struct Node* temp;
        while(curr)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
        
    }
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        struct Node* s=head;
        struct Node* f=head;
        while(f->next!=NULL and f->next->next!=NULL)
        {
            s=s->next;
            f=f->next->next;
        }
        struct Node* f1=head;
        struct Node* s1=reverse(s->next);
        struct Node* temp1;
        struct Node* temp2;
        temp1 = f1;
        temp2 = s1;
        s->next=NULL;
        while(temp1 and temp2)
        {
            int k=temp1->data;
            temp1->data=temp2->data - temp1->data;
            temp2->data=k;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        s->next = reverse(s1);
        return head;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends