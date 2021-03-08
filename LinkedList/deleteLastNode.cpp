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

Node *curr = head;

while(curr!= nullptr)
    {

    cout<<curr->data<<" ";
    curr = curr -> next;
    }

}

Node *deleteNode(Node *head)
{

    if(head == nullptr){

    return 0;
    
    }else if(head->next == nullptr){

        delete head;
        return 0;
    }

    else{


    Node* curr = head;

    while(curr->next->next!=nullptr){

        curr = curr->next;
    }

    delete curr->next;

    curr->next = nullptr;

    return head;

    }

}

int main()
{

    Node *head = new Node(10);

    head -> next = new Node(20);

    head -> next -> next = new Node(30);

    head->next->next->next = new Node(40); 

    printList(head);

    deleteNode(head);


    cout<<"\n After Deletion \n";
    //After deleteing

    printList(head);

    return 0;


}