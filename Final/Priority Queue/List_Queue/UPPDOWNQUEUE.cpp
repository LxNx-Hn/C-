
#include <iostream>
using namespace std;

#include <list>             // list<T>
#include <functional>       // less<T>, greater<T>
#include <initializer_list> // initializer_list<T> : since C++11

template<class E, class C = less<E>> // default template argument
class ListPQ : private list<E>
{
public:
	using list<E>::size;    // inherit(and overload) as public

	const E pop();
	void push(const E& e);
	void push(initializer_list<E> l);
private:
	C cmp;
};

template<typename E, typename C>
void ListPQ<E, C>::push(const E& e)
{
	auto p = this->begin();
	while (p != this->end() && !cmp(e, *p)) ++p;
	this->insert(p, e);
}

template<typename E, typename C>
void ListPQ<E, C>::push(initializer_list<E> l) { for(auto& x : l) push(x); }

template<typename E, typename C>
const E ListPQ<E, C>::pop()
{
	E r(this->front());
	return this->pop_front(), r;
}


ListPQ<int> p1;
ListPQ<int, greater<int>> p2;

int main()
{
	p1.push({3, 7, 4, 1, 6, 2, 5});
	p2.push({3, 7, 4, 1, 6, 2, 5});

	while(p1.size()) cout << p1.pop();
	cout << endl;

	while(p2.size()) cout << p2.pop();
	cout << endl;
	return 0;
}