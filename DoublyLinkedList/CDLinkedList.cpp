#include "pch.h"
#include "CDLinkedList.h"

#include <iostream>
using namespace std;

CDLinkedList::CDLinkedList() {
	m_Head = new CDNode();
	m_Tail = new CDNode();
	m_Head->SetLink(m_Head, m_Tail);
	m_Tail->SetLink(m_Head, m_Tail);
}

CDLinkedList::~CDLinkedList() {
	CDNode* node = GetHead();

	while (node != GetTail()) {
		node = node->GetNext();
		delete node->GetPrev();
	}

	delete node;
}

CDNode* CDLinkedList::GetHead() {
	return m_Head;
}
CDNode* CDLinkedList::GetTail() {
	return m_Tail;
}

void CDLinkedList::PrintList() {
	CDNode* node = GetHead()->GetNext();
	cout << "Head - ";

	while (node != GetTail()) {
		cout << node->GetKey() << " - ";
		node = node->GetNext();
	}

	cout << "Tail" << endl << endl;
}

CDNode* CDLinkedList::InsertBefore(CDNode* dNode, int key) {
	if (dNode == m_Head) 
		return nullptr;
	CDNode* newbie = new CDNode(key);
	newbie->SetLink(dNode->GetPrev(), dNode);

	dNode->SetPrev(newbie);
	newbie->GetPrev()->SetNext(newbie);

	return newbie;
}
bool CDLinkedList::DeleteNode(CDNode* dNode) {
	if (dNode == GetHead() || dNode == GetTail())
		return false;
	dNode->GetPrev()->SetNext(dNode->GetNext());
	dNode->GetNext()->SetPrev(dNode->GetPrev());
	delete dNode;
	return true;
}

CDNode* CDLinkedList::FindKey(int key) {
	CDNode* node = GetHead()->GetNext();
	
	while(node->GetKey() != key && node != GetTail())
		node = node->GetNext();

	if (node == GetTail()) 
		return nullptr;
	else 
		return node;
}
CDNode* CDLinkedList::InsertKey(int ikey, int skey) {
	CDNode* node = FindKey(skey);
	if (node == nullptr) return nullptr;
	
	InsertBefore(node, ikey);
	return node->GetPrev();
}
bool CDLinkedList::DeleteKey(int key) {
	CDNode* node = FindKey(key);
	if (node == nullptr) return false;

	DeleteNode(node);
	return true;
}

CDNode* CDLinkedList::OrderedInsert(int key) {
	CDNode* node = GetHead()->GetNext();
	
	while (node->GetKey() <= key && node != GetTail())
		node = node->GetNext();

	return InsertBefore(node, key);
}
void CDLinkedList::Clear() {
	CDNode* node = GetHead()->GetNext();

	while (node != GetTail()) {
		node = node->GetNext();
		delete node->GetPrev();
	}

	m_Head->SetLink(m_Head, m_Tail);
	m_Tail->SetLink(m_Head, m_Tail);
}
