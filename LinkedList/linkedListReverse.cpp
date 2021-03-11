#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node (int x)
    {
        data = x;
        next = nullptr;
    }
};

Node *Reverse(Node *head){

Node *curr = head;
Node *prev = nullptr;

while(curr!= nullptr)
    {
    
        Node *next = curr->next;
   
        curr->next = prev;

        prev = curr;

        curr = next;

    }


return prev;
}

void printList(Node *head){

Node *curr = head;

while(curr!= nullptr)
    {

    cout<<curr->data<<" ";
    curr = curr -> next;
    }

}
int main()
{

    Node *head = new Node(10);

    head -> next = new Node(20);

    head -> next -> next = new Node(30);

    head->next->next->next = new Node(40); 

    head->next->next->next->next = new Node(50); 

    printList(head);

    Reverse(head);

    cout<<"\n After reverse \n";


    printList(head);

    return 0;


}