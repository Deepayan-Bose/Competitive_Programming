#include <bits/stdc++.h>
using namespace std;
//Input 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

// Output : 1 2 4 5 7 3 6
class Node{
public:

    int data;
    Node *left;
    Node* right;

    Node(int d){
        data=d;
        left=right=NULL;
    }
};
/*
class Tree{
    Node *root;
    //Methods
};
*/
//Preordere BUild of the Tree Root, Left, Right Tree
Node *buildtree(){
    int d;
    cin >> d;

    if(d==-1){
        return NULL;
    }
    Node* n=new Node(d);
    n->left=buildtree();
    n->right=buildtree();
    return n;
}

void printPreorder(Node* root){
    if(root==NULL) return;
    cout << root->data << ' ';
    printPreorder(root->left);
    printPreorder(root->right);
}
int main(){
    Node * root=buildtree();
    printPreorder(root);
    return 0;
        
}
