#include <bits/stdc++.h>
using namespace std;
//Input 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

// Output : 4, 2,7,5,1,3,6
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

void printInorder(Node* root){
    if(root==NULL) return;
    printInorder(root->left);
    cout << root->data << ' ';
    printInorder(root->right);
}
int main(){
    Node * root=buildtree();
    printInorder(root);
    return 0;
        
}
