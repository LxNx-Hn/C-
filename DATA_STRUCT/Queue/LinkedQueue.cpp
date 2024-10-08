/* 
#include string;
#include<iostream>
using namespace std;

typedef string Elem;
class LinkedQueue{
public:
    LinkedQueue();
    int size()const;
    bool empty() const;
    const Elem& front() const;
    void enqueue(const Elem& e);
    void dequeue();
private:
    CircleList C;
    int n;
};

LinkedQueue::LinkedQueue()
    :C(), n(0) {}
int LinkedQueue::size()const{return n;}
bool LinkedQueue::empty() const{ return n==0;}
const Elem& LinkedQueue::front()const{
    return C.front;
}

void LinkedQueue::enqueue(const Elem& e){
    C.add(e);
    C.advance();
    n++;
}
void LinkedQueue::dequeue(){C.remove(); n--;}
 */