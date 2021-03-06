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

Node *insertNode(Node *head,int pos,int key)
{

    Node *temp = new Node(key);
 
 if(pos == 1){

     temp->next = head;
     return temp;
 }


    Node *curr =  head;

    for(int i = 0;i<=pos-2 && curr!=nullptr;i++){

        curr = curr->next;

       } if(curr==nullptr){

            return head;
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

    int pos = 2;
    int key = 35;

    insertNode(head,pos,key);


    cout<<"\n After Inserting \n";
    //After Inserting

    printList(head);

    return 0;


}