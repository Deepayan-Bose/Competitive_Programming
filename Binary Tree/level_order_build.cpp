Node* levelorderBuild(){
    int d;
    cin >> d;

    Node* root=new Node(d);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        node* current=q.front();
        q.pop();

        int c1,c2;
        cin >> c1 >> c2;

        if(c1!=-1){
            current->left=new Node(c1);
            q.push(current->left);
        }
        if(c2!=-1){
            current->right=new Node(c2);
            q.push(current->right);
        }
    }
    return root;
}
