#include "pch.h"
#include "CNode.h"

CNode::CNode() {
	m_key = 0;
	m_next = nullptr;
}

CNode::CNode(int data, CNode* next) {
	m_key = data;
	m_next = next;
}

int CNode::GetKey() {
	return m_key;
}
CNode* CNode::GetNext() {
	return m_next;
}

void CNode::SetKey(int data) {
	m_key = data;
}
void CNode::SetNext(CNode* next) {
	m_next = next;
}
