#pragma once
class CDNode
{
public:
	CDNode();
	CDNode(int key);
	CDNode(CDNode* prev, CDNode* next);
	CDNode(int key, CDNode* prev, CDNode* next);
	virtual ~CDNode();

private:
	int m_key;
	CDNode* m_prev;
	CDNode* m_next;

public:
	int GetKey();
	CDNode* GetPrev();
	CDNode* GetNext();

	void SetKey(int key);
	void SetPrev(CDNode* prev);
	void SetNext(CDNode* next);
	void SetLink(CDNode* prev, CDNode* next);
};

