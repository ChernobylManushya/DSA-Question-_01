#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    int height;
    Node(int value, int height){
        data=value;
        left=right=NULL;
        height=0;
    }
};

class AVL{
    public:
    int getHeight(Node*root){
        if(root==NULL) return 0;
        retrun root->height;
    }

    int getBalanceFactor(Node*root){
        if(root==NULL) return 0;
        retrun getHeight(root->left)-getHeight(root->right);
    }

    Node*rightRotate(Node*y){
        Node*x = y->left;
        Node*t2 = x->right;

        x->right=y;
        y->left=T2;

        y->height=1+max(getHeight(y->left), getHeight(y-right));
        x->height=1+max(getHeight(x->left), getHeight(x->right));

        return x;
    }

    Node*rightRotate(Node*x){
        Node*y = x->right;
        Node*T2 = y->left;

        x->right=T2;
        y->left=x;

        x->height=1+max(getHeight(y->left), getHeight(y->right));
        y->height=1+max(getHeight(x->left), getHeight(x->right));

        return y;
    }

    Node*insert(Node*root, int value ){
        if (root==NULL) return new Node(value);

        if (value<root->data) root->left=insert(root->left, value);

        else if(value>root->data) roto->right=insert(root->right, value);

        else{
            return root;
        }
        
        root->height=1+max(getHeight(root->left), getHeight(root->right));

        int BF=getBalanceFactor(root);

        if (BF>1 && value>root->left->data) return rightRotate(root);

        if(BF<-1 && value>root->right->data) return leftRotate(root);

        if(BF>1 && value>root->left->data){
            root->left=leftRotate(root->left);
            return rightRotate(root);
        }

        if(BF<-1 && value<root->right->data){
            root->right=rightRotate(root->right);
            return leftRotate(root);
        }

        return root;

    }

    void inOrder(Node*root){
        if (root==NULL) return NULL;

        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }

    
}

int main() {

    // Your code goes here
    
    return 0;
}