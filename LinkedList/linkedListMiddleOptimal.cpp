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

void printMiddle(Node *head){

Node *fast = head;
Node *slow = head;
int count = 1;

while(fast!= nullptr && fast->next!= nullptr)
    {
    
        fast = fast->next->next;
        slow = slow->next;

    }


cout<<(slow->data);

}
int main()
{

    Node *head = new Node(10);

    head -> next = new Node(20);

    head -> next -> next = new Node(30);

    head->next->next->next = new Node(40); 

    head->next->next->next->next = new Node(50); 

    printMiddle(head);

    return 0;


}