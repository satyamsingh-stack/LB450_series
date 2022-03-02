    int dia=0;
    int diameter(Node* root){
        // Your code here
        if(root==NULL)
            return 0;
        height(root);
        return dia;
    }
    int height(Node *root){
        if(root==NULL)
            return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        dia=max(dia,lh+rh+1);
        return max(lh,rh)+1;
    }
