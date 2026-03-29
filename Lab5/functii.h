#pragma once

class Node
{
    public:
        int val;
        Node *left;
        Node *right;
        Node(int val);
};

class Compare
{
    public:
        bool operator()(Node *a,Node *b) const;
};

int calculLep(Node *root);