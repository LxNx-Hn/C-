#ifndef LINKED_BINARY_TREE_H
#define LINKED_BINARY_TREE_H
#include "node.h"
#include "position.h"

class LinkedBinaryTree{
public:
    LinkedBinaryTree();
    int size() const;
    bool empty() const;
    Position root() const;
    PositionList positions() const;
    void addRoot();
    void expandExternal(const Position& p);
    Position removeAboveExternal(const Position& p);
    int depth(Node* v, const Position& p){
        if(p.isRoot())
            return 0;
        else
            return 1+depth(v,p.parent());
    }
protected:
    void preorder(Node* v, PositionList& pl) const;
private:
    Node* _root;
    int n; //원소개수 카운트

};

#endif
//depth,height,중위순회,후위순회추가