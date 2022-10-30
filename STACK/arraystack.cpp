template <typename E>
class Array_Stack {
enum{DEF_CAPACITY = 100};
public:
Array_Stack(int cap = DEF_CAPACITY);
int size() const;
bool empty() const;
const E& top() const;
void push(const E& e);
void pop();
private:
E* S;
int capacity;
int t;
};

template <typename E> Array_Stack<E>::Array_Stack(int cap)
:S(new E[cap]), capacity(cap), t(-1) {}
template <typename E> 
int Array_Stack<E>::size() const
{ return (t + 1); }
template <typename E>
 bool Array_Stack<E>::empty() const
{ return(t < 0); }
template <typename E> 
const E& Array_Stack<E>::top() const 
{ return S[t]; }
template <typename E>
 void Array_Stack<E>::push(const E& e)
{ S[++t] = e; }
template <typename E> 
void Array_Stack<E>::pop() 
{ --t; }

/*
#include <iostream>
#include <stdlib.h>
#include "Array_Stack.h" 
using namespace std;

int main(){
Array_Stack<int> A;
A.push(7);
A.push(13);
cout << A.top() << endl; 
return EXIT_SUCCESS;
}
*/