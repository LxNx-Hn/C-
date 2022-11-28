#ifndef TREE
#define TREE
#include <iostream>

using namespace std;
typedef int Elem;

class Node{
public:
    Elem elt;
    Node* par;
    Node* left;
    Node* right;
    Node() : elt(),par(NULL),left(NULL),right(NULL) {}


friend class Position;
friend class LinkedBinaryTree;
};
#endif
