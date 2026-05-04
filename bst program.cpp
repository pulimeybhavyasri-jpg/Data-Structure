int search(struct node* root,int x){
    if(!root) return 0;
    if(root->data==x) return 1;
    if(x<root->data) return search(root->left,x);
    return search(root->right,x);
}