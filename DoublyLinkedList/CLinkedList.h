#pragma once
#include "CNode.h"

class CLinkedList
{
public:
	CLinkedList();
	virtual ~CLinkedList();

private:
	CNode* m_head;
	CNode* m_tail;

public:
	CNode* GetHead();
	CNode* GetTail();

public:
	void PrintList();
	CNode* InsertAfter(CNode* node, int data = 0);
	bool DeleteNext(CNode* node);

	CNode* FindKey(int key);
	CNode* InsertKey(int skey, int ikey);
	bool DeleteKey(int skey);

	CNode* OrderedInsert(int ikey);
	void Clear();
};
