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

Node *Duplicates(Node *head){

Node *curr = head;

while(curr!= nullptr && curr->next!= nullptr)
    {
    
     if(curr->data == curr->next->data){

         Node *temp = curr->next;

         curr->next = curr->next->next;

         delete (temp);
            }else{

     curr = curr->next;
            }

    }


return head;
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

    printList(head);

    Duplicates(head);

    cout<<"\n After remove \n";


    printList(head);

    return 0;


}