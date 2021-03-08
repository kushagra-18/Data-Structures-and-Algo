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

int maxValue(Node *root){


  if(root!= nullptr){

      return max(root->key,max(maxValue(root->left),maxValue(root->right)));
    }else{

        return INTPTR_MIN;
    }


}


int main(){

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
     root->left->left = new Node(50);

    //for printing

   cout<<maxValue(root);

    return 0;
}