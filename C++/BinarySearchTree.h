#pragma once
#include <iostream>

namespace myTree
{
	struct Node
	{	// #. Ʈ���� ���� �⺻���� ����� ��带 ����ü�� �����.
		int mData;
		Node* mLeft;
		Node* mRight;

		Node(int data, Node* left, Node* right)
		{
			mData = data;
			mLeft = left;
			mRight = right;
		}
	};

	class BinarySearchTree
	{
	private:
		Node* mpRoot;

	public:
		BinarySearchTree() { mpRoot = CreateNode(0); }

		Node* GetRoot() { return mpRoot; }

		Node* CreateNode(int data)
		{	// #. ���ο� ��带 ����� �ش�.
			return new Node(data, nullptr, nullptr);
		}

		Node* Insert(Node* pParent, int data)
		{	// Base-Case
			if (pParent == nullptr)
			{	// #. ���� ��尡 ����Ű�� ���� ���ٸ� ��带 ���� ����� ��ȯ�Ѵ�.
				return CreateNode(data);
			}
			// Recursive-Case
			if (data < pParent->mData)
			{	// #. ���� ����� ������ ������ �������� �ٿ� �ش�.
				pParent->mLeft = Insert(pParent->mLeft, data);
			}
			else if (data > pParent->mData)
			{	// #. ���� ����� ������ ũ�� ���������� �ٿ� �ش�.
				pParent->mRight = Insert(pParent->mRight, data);
			}
			return pParent;
		}

	public:
		void Visit(Node* pNode) { std::cout << pNode->mData << "-> "; }

		void In_Order(Node* pNode)
		{
			if (pNode == nullptr)
			{
				return;
			}

			In_Order(pNode->mLeft);
			Visit(pNode);
			In_Order(pNode->mRight);
		}
	};
}