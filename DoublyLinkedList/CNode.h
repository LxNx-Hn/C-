#pragma once
class CNode
{
public:
	CNode();
	CNode(int data, CNode* next= nullptr);
	virtual ~CNode()
	;

private:
	int m_key;
	CNode* m_next;

public:
	int GetKey();
	CNode* GetNext();

	void SetKey(int data);
	void SetNext(CNode* next);
};
