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
void inorderPrint(const LinkedBinaryTree& T, Position& p){
    if(p.isExternal()==false){
       Position _p=p.left();
        inorderPrint(T,_p);
        }
        cout<< *p << "\t";
        
    if(p.isExternal()==false){
        Position _p=p.right();
        inorderPrint(T,_p);
    }
    }

int depth(const LinkedBinaryTree& T, const Position& p){
        if(p.isRoot())
            return 0;
        else
            return 1+depth(T,p.parent());
    }
   

int main() {
    LinkedBinaryTree T;
    Position p;
    Position p_left;
    Position p_right;
    Position pl;
    Position pr;
    
    cout<< "Tree Size" << T.size() <<endl;
    T.addRoot();
    cout<< "Tree Size" << T.size() <<endl;

    p=T.root();
    p.setElem(100);

    T.expandExternal(p);
    p_left = p.left(); p_left.setElem(200);
    p_right = p.right(); p_right.setElem(300);
    cout<< "Tree Size" << T.size() <<endl;

    T.expandExternal(p_left);
    pl= p_left.left(); pl.setElem(400);
    pr= p_left.right(); pr.setElem(500);
    cout<< "Tree Size" << T.size() <<endl;


    preorderPrint(T,p);
    cout<<endl;
    postorderPrint (T,p);
    cout<<endl;
    inorderPrint(T,p);
    cout<<endl;
    cout<< depth(T,p);

    return 0;
}