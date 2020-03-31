//
//  treeBody.h
//  binarySearchTree
//
//  Created by Mritunjay Singh on 30/03/20.
//  Copyright © 2020 Mritunjay Singh. All rights reserved.
//

#ifndef treeBody_h
#define treeBody_h

struct Node
{
    Node* lchild;
    int data;
    Node* rchild;
}*root = nullptr;

void insert(int key)
{
    Node* t = root;
    Node* r = nullptr;
    Node* p;
    
    if(root == nullptr)
    {
        p = new Node;
        p->data = key;
        p->lchild = p->rchild = nullptr;
        root = p;
        return;
    }
    
    while(t!=NULL)
    {
        r = t;
        if(key < t->data)
            t = t->lchild;
        else if(key > t->data)
            t = t->rchild;
        else
            return;
    }
    
    p = new Node;
    p->data = key;
    p->lchild = p->rchild = NULL;
    
    if(key < r->data)
        r->lchild = p;
    else
        r->rchild = p;
}

void inOrder(Node* p)
{
    if(p)
    {
        inOrder(p->lchild);
        std::cout<<p->data<<" ";
        inOrder(p->rchild);
    }
}

int search(int key)
{
    Node* t = root;
    while(t != nullptr)
    {
        if(key == t->data)
            return t->data;
        else if(key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return 0;
}


#endif /* treeBody_h */
