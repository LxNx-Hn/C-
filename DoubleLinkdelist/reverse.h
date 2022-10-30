void listReverse(DLinkedList& L){
    DLinkedList T;
    while(!empty()){
        string s=L.front(); L.removeFront();
        T.addFront(s);
    }

while (!T.empty())
{
    string s =T.front(); T.removeFront();
    L.addBack(s);
}
}