#pragma once
#include <iostream>

namespace myTree
{
	struct Node
	{	// #. 트리의 가장 기본적인 요소인 노드를 구조체로 만든다.
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
		{	// #. 새로운 노드를 만들어 준다.
			return new Node(data, nullptr, nullptr);
		}

		Node* Insert(Node* pParent, int data)
		{	// Base-Case
			if (pParent == nullptr)
			{	// #. 현재 노드가 가리키는 곳이 없다면 노드를 새로 만들고 반환한다.
				return CreateNode(data);
			}
			// Recursive-Case
			if (data < pParent->mData)
			{	// #. 현재 노드의 값보다 작으면 왼쪽으로 붙여 준다.
				pParent->mLeft = Insert(pParent->mLeft, data);
			}
			else if (data > pParent->mData)
			{	// #. 현재 노드의 값보다 크면 오른쪽으로 붙여 준다.
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