#include<algorithm>
#include<iostream>

using namespace std;

struct Node {

    int key;
    Node *left;
    Node *right;

        Node(int k){

            key = k;
            left = right = nullptr;
        }
};

int getSize(Node *root){

    if(root == nullptr){

        return 0;
    }
    else{

           return getSize(root->left) + getSize(root->right) + 1;

    }
}


int main(){

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);

    //for printing

   cout<<getSize(root);

    return 0;
}