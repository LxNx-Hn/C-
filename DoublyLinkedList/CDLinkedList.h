#pragma once
#include "CDNode.h"

class CDLinkedList
{
public:
	CDLinkedList();
	virtual ~CDLinkedList();

private:
	CDNode* m_Head;
	CDNode* m_Tail;

public:
	CDNode* GetHead();
	CDNode* GetTail();

public:
	void PrintList();

public:
	CDNode* InsertBefore(CDNode* dNode, int key = 0);
	bool DeleteNode(CDNode* dNode);

	CDNode* FindKey(int key);
	CDNode* InsertKey(int ikey, int skey);
	bool DeleteKey(int key);

	CDNode* OrderedInsert(int key);
	void Clear();
};


