#pragma once
#include <iostream>
#include <stack>
#include <queue>

namespace MyTree
{	// �Ϲ����� �̸��� ����� �����̱� ������ �ߺ��� ���ϱ� ���� namespace �� ���� �д�.
	struct Node
	{	// #. Ʈ���� ���� �⺻���� ����� ��带 ����ü�� �����.
		int mData;		// #. ���ҿ� ���� ��
		Node* mLeft;
		Node* mRight;	// #. �ڽ� ���� ������ ���ؼ� �����Ͱ� �ʿ��ϴ�.
// #. ���̳ʸ� Ʈ���� �ڽ��� �ִ� �� �� ���´�.

		Node(int data, Node* pLeft, Node* pRight) : mData{ data }, mLeft{ pLeft }, mRight{ pRight }
		{
			// C++ ���� ����ü�� ��� ����� �ۺ��� Ŭ������ ����. ������ �����ڰ� �ִ�.
		}
	};

	class BinaryTree
	{
	private:	// #1. ���
		Node* mpRoot;	// #. �Ļ��Ǿ� ���ư� �� �ֵ��� ��������� �����ͷ� �����Ѵ�.

	public:		// #2. ����
		BinaryTree()
		{	// #. mpRoot �� ���� ������� ��带 ����Ų��.
			mpRoot = CreateNode(0);
		}

		Node* CreateNode(int data)	// #. ������� Node �� ��ȯ�Ѵ�.
		{	// #. ���ο� ��带 ����� �ش�.
			return new Node(data, nullptr, nullptr);
		}

		Node* GetRoot() { return mpRoot; }
		Node* InsertLeft(Node* parent, int data)
		{	// #. nullptr �� �Ǿ� �ִ� �ڽ� ��带 ���� ���� ����Ų��.
			parent->mLeft = CreateNode(data);
			return parent->mLeft;	// #. ���� ���� ����� ���ʿ� �ű� ��带 ���δ�.
		}
		Node* InsertRight(Node* parent, int data)
		{	// #. nullptr �� �Ǿ� �ִ� �ڽ� ��带 ���� ���� ����Ų��.
			parent->mRight = CreateNode(data);
			return parent->mRight;	// #. ���� ���� ����� �����ʿ� �ű� ��带 ���δ�.
		}

	public:		// #3. ��ȸ
		void Visit(Node* node) { std::cout << node->mData << "-> "; }

		// #. < ���� �켱( Depth-First ) > : Ʈ���� �ڽ� ��带 ���� �������ٰ� �ö���� ��ȸ�� ���Ѵ�.
		//	=> stack
		void DepthFirst()
		{	// #. Node �� ���鶧 new �� ����Ͽ� �޸� ������ �Ҵ��Ͽ��� ������ ������ Ÿ������ stack �� ����� �ش�.
			std::stack<Node*> stack;
			stack.push(GetRoot()); // #. stack �� root �� �־� �ش�.

			while (!stack.empty())
			{	// #. stack �� ������� �ʴٸ� top �� ��� �� �����ִ� ���� �ݺ��Ѵ�.
				auto node = stack.top();
				Visit(node);
				stack.pop();
				if (node->mRight != nullptr)	// #. stack �� ���̴� ������ �����ؼ� �������� ���� �װ� ������ ������ �׾��ش�.
				{
					stack.push(node->mRight);
				}
				if (node->mLeft != nullptr)
				{
					stack.push(node->mLeft);
				}
			}
		}

		// => ���
		void Pre_Order(Node* pNode)	// #. ��͸� ���� �Լ��� �ݺ��Ǳ� ������ �Ű� ������ �����͸� �޾ƾ� �Ѵ�.
		{	// Base-Case
			if (pNode == nullptr)
			{	// ��尡 ����Ű�� ������ ���� �� ��ȯ�Ѵ�.
				return;
			}
			// Recursive-Case
			Visit(pNode);
			Pre_Order(pNode->mLeft);	// #. ���� ����� ���ʿ� ���� ���
			Pre_Order(pNode->mRight);	// #. ���� ����� �����ʿ� ���� ���
		}
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
		void Post_Order(Node* pNode)
		{
			if (pNode == nullptr)
			{
				return;
			}

			Post_Order(pNode->mLeft);
			Post_Order(pNode->mRight);
			Visit(pNode);
		}
		// #. < �ʺ� �켱( Breadth-First ) > : ���� ������ �ִ� ��带 ������� ��ȸ�ϴ� ���� ���Ѵ�.
		//  => queue
		void BreadthFirst()
		{
			std::queue<Node*> queue;
			queue.push(GetRoot());		// #. ���������� queue �� root �� �־��ش�.

			while (!queue.empty())
			{
				auto node = queue.front();

				Visit(node);
				queue.pop();
				if (node->mLeft != nullptr)
				{
					queue.push(node->mLeft);
				}
				if (node->mRight != nullptr)
				{
					queue.push(node->mRight);
				}
			}
		}

	public:		// #. �ΰ� ���
		int Sum(Node* pNode)
		{	// Base-Case
			if (pNode == nullptr)
			{
				return 0;
			}
			// Recursive-Case
			return Sum(pNode->mLeft) + pNode->mData + Sum(pNode->mRight);
			// #. ���� �κ� ������ �հ� + ���� ������ + ������ �κ� ������ �հ�
		}

		bool Search(Node* pNode, int value)
		{
			if (pNode == nullptr)
			{
				return false;
			}

			return Search(pNode->mLeft, value) || pNode->mData == value || Search(pNode->mRight, value);
			// #. ���� �κ� ���տ��� ã�ƺ���, ���� �����Ϳ��� ã�ƺ���, ������ �κ� ���տ��� ã�ƺ���
		}
	};
}