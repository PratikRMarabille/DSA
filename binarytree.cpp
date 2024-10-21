#include<bits/stdc++.h>

using namespace std;


class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

void inOrderDFS(Node* node) {
    if (node == nullptr) return;
    inOrderDFS(node->left);
    cout << node->data << " ";
    inOrderDFS(node->right);
}


int main()
{
    Node* root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(5);

    cout << "In-order DFS: ";
    inOrderDFS(root);
 


    return 0;

}