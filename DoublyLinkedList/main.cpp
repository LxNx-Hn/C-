//#include "pch.h"
#include <iostream>

#include "CLinkedList.h"
#include "CDLinkedList.h"


using namespace std;

void DoSingleList(), DoDoubleList();

int main() {
	int i;
	cout << "모드를 선택하시오. [싱글(0), 더블(1)] : ";
	cin >> i;
	cout << endl;

	if (i == 0) {
		DoSingleList();
	}
	else if (i == 1) {
		DoDoubleList();
	}
	else {
		cout << "다른 걸 선택하셨군요." << endl;
	}

	return 0;
}

void DoSingleList() {
	CNode* node;

	CLinkedList LinkedList;
	LinkedList.OrderedInsert(10);
	LinkedList.OrderedInsert(5);
	LinkedList.OrderedInsert(8);
	LinkedList.OrderedInsert(3);
	LinkedList.OrderedInsert(1);
	LinkedList.OrderedInsert(7);
	LinkedList.OrderedInsert(8);

	cout << "Initiated Single List : " << endl << endl;
	LinkedList.PrintList();

	cout << "Finding 4 is ";
	if (LinkedList.FindKey(4) == LinkedList.GetTail())
		cout << "un";
	cout << "successful" << endl;

	cout << "Finding 5 is ";
	if ((node = LinkedList.FindKey(5)) == LinkedList.GetTail())
		cout << "un";
	cout << "successful" << endl << endl;

	cout << "Insert 9 after 5" << endl << endl;
	LinkedList.InsertAfter(node, 9);
	LinkedList.PrintList();

	node = LinkedList.FindKey(10);
	cout << "Delete next last node" << endl << endl;
	LinkedList.DeleteNext(node);
	LinkedList.PrintList();

	node = LinkedList.FindKey(3);
	cout << "Delete next 3" << endl << endl;
	LinkedList.DeleteNext(node);
	LinkedList.PrintList();

	cout << "Insert node 2 before 3" << endl << endl;
	LinkedList.InsertKey(2, 3);
	LinkedList.PrintList();

	cout << "Delete node 2" << endl << endl;
	if (!LinkedList.DeleteKey(2))
		cout << "Deleteing 2 was unsucessful" << endl << endl;
	LinkedList.PrintList();

	cout << "Delete node 1" << endl << endl;
	LinkedList.DeleteKey(1);
	LinkedList.PrintList();

	cout << "Clear List" << endl << endl;
	LinkedList.Clear();
	LinkedList.PrintList();
}
void DoDoubleList() {
	CDNode* node;

	CDLinkedList LinkedList;
	LinkedList.OrderedInsert(10);
	LinkedList.OrderedInsert(5);
	LinkedList.OrderedInsert(8);
	LinkedList.OrderedInsert(3);
	LinkedList.OrderedInsert(1);
	LinkedList.OrderedInsert(7);
	LinkedList.OrderedInsert(8);

	cout << "Initiated Double List : " << endl << endl;
	LinkedList.PrintList();

	
	if (LinkedList.FindKey(4) != nullptr)
		cout << "Finding 4 is successful" << endl;
	else
		cout << "Finding 4 is unsuccessful" << endl;

	node = LinkedList.FindKey(5);
	if (node != nullptr)
		cout << "Finding 5 is successful" << endl << endl;
	else
		cout << "Finding 5 is unsuccessful" << endl << endl;

	cout << "Insert 7 before 5" << endl << endl;
	LinkedList.InsertBefore(node, 7);
	LinkedList.PrintList();

	node = LinkedList.FindKey(3);
	cout << "Delete 3" << endl << endl;
	LinkedList.DeleteNode(node);
	LinkedList.PrintList();

	cout << "Insert node 2 before 10" << endl << endl;
	LinkedList.InsertKey(2, 10);
	LinkedList.PrintList();

	cout << "Delete node 2" << endl << endl;
	if (!LinkedList.DeleteKey(2))
		cout << "Deleteing 2 was unsucessful" << endl << endl;
	LinkedList.PrintList();

	cout << "Delete node 1" << endl << endl;
	LinkedList.DeleteKey(1);
	LinkedList.PrintList();

	cout << "Insert 15 at first" << endl << endl;
	LinkedList.InsertBefore(LinkedList.GetHead()->GetNext(), 15);
	LinkedList.PrintList();

	cout << "Clear All Node" << endl << endl;
	LinkedList.Clear();
	LinkedList.PrintList();
}
