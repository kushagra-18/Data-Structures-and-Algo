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

Node *insertList(Node *head,int key){

Node *temp = new Node(key);

temp->next = head;

return temp;

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

     Node *head = nullptr;

    head = insertList(head,10);
    head = insertList(head,20);
    head = insertList(head,30);
    head = insertList(head,40);

    printList(head);

    return 0;


} 