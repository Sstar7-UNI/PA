#include<iostream>
#include<queue>
#include<vector>
#include"functii.h"

using namespace std;

int main()
{
    int n;
    cin>>n;
    priority_queue<Node*,vector<Node *>,Compare> B;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        B.push(new Node(x));
    }
    while(B.size()>1)
    {
        Node *t1=B.top();
        B.pop();
        Node *t2=B.top();
        B.pop();
        Node *t=new Node(t1->val+t2->val);
        t->left=t1;
        t->right=t2;
        B.push(t);
    }
    Node *root=B.top();
    cout<<"Valoarea este: "<<calculLep(root);
    return 0;
}