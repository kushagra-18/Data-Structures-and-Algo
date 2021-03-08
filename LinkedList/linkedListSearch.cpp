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

void search(Node *head,int key)
{

Node *curr = head;
int count = 0;

    while(curr!= nullptr)
     {

            if(curr->data == key)
            {

                cout<<"The element is present at:"<<count;
                return;
            }

             else if(curr == nullptr){

                 cout<<"Element is not present";
                 return;

             }
            
            else
            
            {

                count++;
            }
           


    curr = curr -> next;
     }

}


int main()
{

    Node *head = new Node(10);

    head -> next = new Node(20);

    head -> next -> next = new Node(30);

    head->next->next->next = new Node(40); 

    int key = 40;

    search(head,key);

    return 0;


}