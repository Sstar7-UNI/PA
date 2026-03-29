#include<iostream>
#include<queue>
#include<vector>
#include"functii.h"

bool Compare::operator()(Node *a,Node *b) const
{
    return a->val>b->val;
}

int calculLep(Node *root)
{
    if(root==nullptr)return 0;
    if(root->left==nullptr&&root->right==nullptr)return 0;
    else return root->val+calculLep(root->left)+calculLep(root->right);
}

Node::Node(int x)
{
    this->val=x;
    this->left=nullptr;
    this->right=nullptr;
}