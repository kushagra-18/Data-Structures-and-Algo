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

void TraversalCircular(Node *head){

    if(head == nullptr){

        return;
    }

Node *curr = head;

do{
    cout<<(curr->data);
    curr = curr->next;  
}while(curr!=head);

}

//return head;

int main()
{

    Node *head = new Node(10);

    head -> next = new Node(20);

    head -> next -> next = new Node(20);

    head->next->next->next = new Node(40); 

    head->next->next->next->next = new Node(40); 

    head->next->next->next->next->next = new Node(40); 

    TraversalCircular(head);

    return 0;


}