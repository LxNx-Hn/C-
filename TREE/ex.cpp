#include "Linked_binary_tree.h"

int main() {
    LinkedBinaryTree T;
    Position p;
    Position p_left;
    Position p_right;

    cout<< "Tree Size" << T.size() <<endl;
    T.addRoot();
    cout<< "Tree Size" << T.size() <<endl;
    return 0;
}