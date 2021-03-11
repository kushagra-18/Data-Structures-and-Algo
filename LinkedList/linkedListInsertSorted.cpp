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

Node *insertNode(Node *head,int key)
{

    Node *temp = new Node(key);
 
 if(head == nullptr){

     return temp;
 }


 if(key < head->data){

     temp ->next = head;
     return temp;

 }


    Node *curr =  head;

    while(curr->next!=nullptr && curr->next->data < key){

        curr = curr->next;
    }

        temp->next = curr->next;
        curr->next = temp;
    

    return head;
  
}

int main()
{

    Node *head = new Node(10);

    head -> next = new Node(20);

    head -> next -> next = new Node(30);

    head->next->next->next = new Node(40); 

    printList(head);

    int key = 5;

    insertNode(head,key);


    cout<<"\n After Inserting \n";
    //After Inserting

    printList(head);

    return 0;


}