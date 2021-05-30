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

Node *insertNode(Node *head,int key){

    Node *temp = new Node(key);

    if(head == nullptr){

        temp->next = temp;

        return temp;
    }else{

        temp->next = head->next;

        head->next = temp;

        int t = head->data;

        head->data = temp->data;

        temp->data = t;

        return head;


    }


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

    head -> next -> next = new Node(20);

    head->next->next->next = new Node(40); 

    head->next->next->next->next = new Node(40); 

    head->next->next->next->next->next = new Node(40); 

    int key = 5;
  
    insertNode(head,key);

    printList(head);

    return 0;


}