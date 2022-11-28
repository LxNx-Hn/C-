#include "Linked_binary_tree.h"

LinkedBinaryTree::LinkedBinaryTree()
    : _root(NULL),n(0) {}
int LinkedBinaryTree::size() const {
        return n;
 }
bool LinkedBinaryTree::empty() const    
    {
        return size() == 0; 
    }
Position LinkedBinaryTree::root() const  
    { 
        return Position(_root);
        }
void LinkedBinaryTree::addRoot()
    {
        _root = new Node; n = 1; //new = 자기 레퍼런스 반환, 동적할당
        }

void LinkedBinaryTree::expandExternal(const Position& p)
    {
        Node* v = p.v; // 레퍼런스값
        v->left = new Node;
        v->left ->par = v;
        v->right = new Node;
        v->right->par =v;
        n+=2;
    }


Position 
LinkedBinaryTree::removeAboveExternal(const Position& p){// 삭제시 부모도 같이 삭제후 형제노드 올리기
    
        Node* w =p.v; 
        Node* v = w -> par;
        Node* sib = (w== v->left ? v->right : v->left);
        
        if (v == _root)
        {
            _root = sib;
            sib -> par = NULL;
        }
        else{
            Node* gpar = v->par;
            if (v==gpar->left) gpar->left = sib;
            else gpar ->right = sib;
            sib -> par = gpar;
        }
        delete w; delete v;
        n-=2;
        return Position(sib);
        
       }

    

        PositionList LinkedBinaryTree::positions()const 
        {
        PositionList pl;
        preorder(_root, pl);
        return PositionList(pl);
        }

void LinkedBinaryTree::preorder(Node* v,PositionList& pl) const 
        {

            pl.push_back(Position(v));
            if(v->left != NULL)
                preorder(v->left, pl);
            if(v->right !=NULL)
                preorder(v->right, pl);
        } 
        
    
