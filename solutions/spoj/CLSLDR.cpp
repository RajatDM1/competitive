#include<bits/stdc++.h> 
using namespace std; 
  
/* structure for a node in circular 
   linked list */
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
  
// To create a new node of circular 
// linked list 
Node *newNode(int data) 
{ 
   Node *temp = new Node; 
   temp->next = temp; 
   temp->data = data; 
} 
  
/* Function to find the only person left 
   after one in every m-th node is killed 
   in a circle of n nodes */
void getJosephusPosition(int m, int n, int o) 
{ 
    // Create a circular linked list of 
    // size N. 
    Node *head = newNode(1); 
    Node *prev = head; 
    for (int i = 2; i <= n; i++) 
    { 
        prev->next = newNode(i); 
        prev = prev->next; 
    } 
    prev->next = head; // Connect last 
                       // node to first 
  	int count=0;
  	 Node *ptr1 = head, *ptr2 = head; 
    while(count!=m)
    {
    	ptr1 = ptr1->next;
    	count++;
    }
   	ptr2 = ptr1;
    while (ptr1->next != ptr1) 
    { 
        // Find m-th node 
         count = 1; 
        while (count != o) 
        { 
            ptr2 = ptr1; 
            ptr1 = ptr1->next; 
            count++; 
        } 
  
        /* Remove the m-th node */
        ptr2->next = ptr1->next; 
        ptr1 = ptr2->next; 
    } 
  
    printf ("%d\n", 
            ptr1->data); 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    int t,n,m,o;
    cin>>t;
    while(t--)
    {
    	cin>>n>>m>>o;
    	getJosephusPosition(m, n, o); 	
    }
    
    return 0; 
} 