// Expected time complexity: O(N)
// Expected auxiliary space: O(h) , where h = height of tree

int height(Node *root,bool &b){
        if(root==NULL)
            return 0;
        int lh=height(root->left,b);
        int rh=height(root->right,b);
        if(abs(lh-rh)>1)
            b=false;
        else
            return max(lh,rh)+1;
    }
    bool isBalanced(Node *root)
    {
        bool b=true;
        height(root,b);
        return b;
    }
