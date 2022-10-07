#include "pch.h"
#include "CLinkedList.h"

#include <iostream>
using namespace std;

CLinkedList::CLinkedList() {
	m_head = new CNode(-1);
	m_tail = new CNode(-1);

	m_head->SetNext(m_tail);
	m_tail->SetNext(m_tail);
}

CLinkedList::~CLinkedList() {
	CNode* dNode = nullptr;
	CNode* eNode = GetHead();

	while (eNode != GetTail()) {
		dNode = eNode;
		eNode = eNode->GetNext();
		delete dNode;
	}

	delete eNode;
}

CNode* CLinkedList::GetHead() {
	return m_head;
}
CNode* CLinkedList::GetTail() {
	return m_tail;
}

void CLinkedList::PrintList() {
	CNode* node = GetHead()->GetNext();

	cout << "head - ";
	while (node != GetTail()) {
		cout << node->GetKey() << " - ";
		node = node->GetNext();
	}

	cout << "tail" << endl << endl;
}

CNode* CLinkedList::InsertAfter(CNode* node, int key) {
	if (node == GetTail()) return nullptr;
	CNode* newbie = new CNode(key);
	newbie->SetNext(node->GetNext());
	node->SetNext(newbie);
	return newbie;
}
bool CLinkedList::DeleteNext(CNode* node) {
	if (node->GetNext() == GetTail()) {
		return false;
	}

	CNode* temp = node->GetNext();
	node->SetNext(node->GetNext()->GetNext());
	delete temp;

	return true;
}

CNode* CLinkedList::FindKey(int key) {
	CNode* node = GetHead()->GetNext();
	while (node->GetKey() != key && node != GetTail())
		node = node->GetNext();
	return node;
}
CNode* CLinkedList::InsertKey(int ikey, int skey) {
	CNode* node = GetHead();
	while (node->GetNext()->GetKey() != skey && node->GetNext() != GetTail()) {
		node = node->GetNext();
	}

	if (node != GetTail()) {
		return InsertAfter(node, ikey);
	}

}
bool CLinkedList::DeleteKey(int skey) {
	CNode* node = GetHead();
	while (node->GetNext()->GetKey() != skey && node->GetNext() != GetTail()) {
		node = node->GetNext();
	}

	return DeleteNext(node);
}

CNode* CLinkedList::OrderedInsert(int ikey) {
	CNode* node = GetHead();
	while (node->GetNext()->GetKey() <= ikey && node->GetNext() != GetTail()) {
		node = node->GetNext();
	}

	return InsertAfter(node, ikey);
}
void CLinkedList::Clear() {
	CNode* dNode = GetHead();
	CNode* eNode = GetHead()->GetNext();

	while (eNode != GetTail()) {
		dNode = eNode;
		eNode = eNode->GetNext();
		delete dNode;
	}

	m_head->SetNext(m_tail);
}
