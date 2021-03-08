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

void printList(Node *head){

if(head == nullptr){

    return ;
    }

cout<<head->data<<" ";
printList(head->next);

}





int main()
{

    Node *head = new Node(10);

    head -> next = new Node(20);

    head -> next -> next = new Node(30);

    head->next->next->next = new Node(40); 

    printList(head);

    return 0;


}