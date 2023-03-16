
#include<iostream>
using namespace std;

class Node {
   public:
     int data;
     Node *next;

     Node(int data){
       this->data = data;
       next = NULL;
     }
};

Node* removeNthFromEnd(Node* head, int k) {
    Node* one = head;
    Node* two = head;
        
    while(k--)
    {
        two = two->next;
    }
    if(two==NULL)
        return one->next;
    while(two->next!=NULL)
    {
        one = one->next;
        two = two->next;
    }
    
    one->next = one->next->next; 

    return head;
}

    





   


