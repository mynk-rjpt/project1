#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
    int data;
    Node*left;
    Node*right;
}Node;

Node*createNode(int data){
    Node*newNode=(Node*)malloc(sizeof(Node));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

Node*insertBST(Node*root,int key){
    if(root==NULL){
        root=createNode(key);
        return root;
    }
    Node*node=createNode(key);
    if(root->data<key){
        root->right=insertBST(root->right,key);
    }
    else{
        root->left=insertBST(root->left,key);
    }
    return root;
}

bool searchInBst(Node*root,int key){
    if(root==NULL)
        return false;
    if(root->data==key)
        return true;
    else if(root->data<key)
        return searchInBst(root->right,key);
    else    
        return searchInBst(root->left,key);
}

int findmin(Node*root){
    if(root->left==NULL)
        return root->data;
    return findmin(root->left);
}

Node*deleteInBst(Node*root,int key){
    if(root==NULL)
        return NULL;
    if(root->data<key)
        root->right=deleteInBst(root->right,key);
    else if(root->data>key)
        root->left=deleteInBst(root->left,key);
    else{
        if(root->left==NULL)
            return root->right;
        else if(root->right==NULL)
            return root->left;
        else{
            root->data=findmin(root->right);
            root->right=deleteInBst(root->right,root->data);
            return root;
        }
        
    }
    return root;
}

void inOrder(Node*root){
    if(root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
    //cout<<endl;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    Node*root=NULL;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        root=insertBST(root,arr[i]);
    }
    deleteInBst(root,3);
    if(searchInBst(root,10))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    inOrder(root);

    return 0;
}
