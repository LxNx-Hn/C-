#include "Linked_binary_tree.h"

void preorderPrint(const LinkedBinaryTree& T,Position& p){
    cout<< *p << "\t";

    if(p.isExternal()==false){
        Position _p=p.left();
        preorderPrint(T,_p);
        _p = p.right();
        preorderPrint(T, _p);
    }
}

void postorderPrint(const LinkedBinaryTree& T, Position& p){
    if(p.isExternal()==false){
        Position _p=p.left();
        postorderPrint(T,_p);
        _p = p.right();
        postorderPrint(T, _p);
    }
     cout<< *p << "\t";
}



int main() {
    LinkedBinaryTree T;
    Position p;
    Position p_left;
    Position p_right;
    
    cout<< "Tree Size" << T.size() <<endl;
    T.addRoot();
    cout<< "Tree Size" << T.size() <<endl;
    T.expandExternal(p);
    p_left = p.left(); p_left.setElem(200);
    p_right = p.right(); p_right.setElem(300);
    cout<< "Tree Size" << T.size() <<endl;

    preorderPrint(T,p);
    cout<<endl;
    postorderPrint (T,p);

    return 0;
}