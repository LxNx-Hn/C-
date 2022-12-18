#include "Queue.h"
#include <functional>

ListPQ<int, less<int>> p;
list <int> K;

int main()
{
	K.push_front(3);
	K.push_front(1);
	K.push_front(7);

	int data;
	data = K.front();
	p.insert(data);
	K.pop_front();
	data = K.front();
	p.insert(data);
	K.pop_front();

	data = K.front();
	p.insert(data);
	K.pop_front();
	cout << p.min() << endl;
	p.removeMin();
	cout << p.min() << endl;
	p.removeMin();
	cout << p.min() << endl;
	p.removeMin();
	return 0;
}
