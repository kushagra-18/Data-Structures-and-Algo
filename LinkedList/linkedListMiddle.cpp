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

Node *curr = head;
int count = 1;

while(curr!= nullptr)
    {
    curr = curr -> next;
    count++;
    }


int i = 1;

Node *currNew = head;

while(i!=count/2){

currNew = currNew->next;
i++;

}

cout<<(currNew->data);

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