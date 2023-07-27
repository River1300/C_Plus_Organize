#pragma once
#include <iostream>
#include <stack>
#include <queue>

namespace MyTree
{	// 일반적인 이름을 사용할 예정이기 때문에 중복을 피하기 위해 namespace 에 숨겨 둔다.
	struct Node
	{	// #. 트리의 가장 기본적인 요소인 노드를 구조체로 만든다.
		int mData;		// #. 원소에 넣을 값
		Node* mLeft;
		Node* mRight;	// #. 자식 노드와 연결을 위해서 포인터가 필요하다.
// #. 바이너리 트리는 자식을 최대 두 개 갖는다.

		Node(int data, Node* pLeft, Node* pRight) : mData{ data }, mLeft{ pLeft }, mRight{ pRight }
		{
			// C++ 에서 구조체는 모든 멤버가 퍼블릭인 클래스와 같다. 때문에 생성자가 있다.
		}
	};

	class BinaryTree
	{
	private:	// #1. 노드
		Node* mpRoot;	// #. 파생되어 나아갈 수 있도록 출발지점을 포인터로 지정한다.

	public:		// #2. 연결
		BinaryTree()
		{	// #. mpRoot 가 새로 만들어진 노드를 가리킨다.
			mpRoot = CreateNode(0);
		}

		Node* CreateNode(int data)	// #. 만들어진 Node 를 반환한다.
		{	// #. 새로운 노드를 만들어 준다.
			return new Node(data, nullptr, nullptr);
		}

		Node* GetRoot() { return mpRoot; }
		Node* InsertLeft(Node* parent, int data)
		{	// #. nullptr 로 되어 있는 자식 노드를 새로 만들어서 가리킨다.
			parent->mLeft = CreateNode(data);
			return parent->mLeft;	// #. 전달 받은 노드의 왼쪽에 신규 노드를 붙인다.
		}
		Node* InsertRight(Node* parent, int data)
		{	// #. nullptr 로 되어 있는 자식 노드를 새로 만들어서 가리킨다.
			parent->mRight = CreateNode(data);
			return parent->mRight;	// #. 전달 받은 노드의 오른쪽에 신규 노드를 붙인다.
		}

	public:		// #3. 순회
		void Visit(Node* node) { std::cout << node->mData << "-> "; }

		// #. < 깊이 우선( Depth-First ) > : 트리의 자식 노드를 따라서 내려갔다가 올라오는 순회를 말한다.
		//	=> stack
		void DepthFirst()
		{	// #. Node 를 만들때 new 를 사용하여 메모리 공간을 할당하였기 때문에 포인터 타입으로 stack 을 만들어 준다.
			std::stack<Node*> stack;
			stack.push(GetRoot()); // #. stack 에 root 를 넣어 준다.

			while (!stack.empty())
			{	// #. stack 이 비어있지 않다면 top 을 출력 후 꺼내주는 것을 반복한다.
				auto node = stack.top();
				Visit(node);
				stack.pop();
				if (node->mRight != nullptr)	// #. stack 의 쌓이는 구조를 생각해서 오른쪽을 먼저 쌓고 왼쪽을 다음에 쌓아준다.
				{
					stack.push(node->mRight);
				}
				if (node->mLeft != nullptr)
				{
					stack.push(node->mLeft);
				}
			}
		}

		// => 재귀
		void Pre_Order(Node* pNode)	// #. 재귀를 통해 함수가 반복되기 때문에 매개 변수로 포인터를 받아야 한다.
		{	// Base-Case
			if (pNode == nullptr)
			{	// 노드가 가리키는 공간이 없을 때 반환한다.
				return;
			}
			// Recursive-Case
			Visit(pNode);
			Pre_Order(pNode->mLeft);	// #. 현재 노드의 왼쪽에 붙은 노드
			Pre_Order(pNode->mRight);	// #. 현재 노드의 오른쪽에 붙은 노드
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
		// #. < 너비 우선( Breadth-First ) > : 같은 레벨에 있는 노드를 순선대로 순회하는 것을 말한다.
		//  => queue
		void BreadthFirst()
		{
			std::queue<Node*> queue;
			queue.push(GetRoot());		// #. 마찬가지로 queue 에 root 를 넣어준다.

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

	public:		// #. 부가 기능
		int Sum(Node* pNode)
		{	// Base-Case
			if (pNode == nullptr)
			{
				return 0;
			}
			// Recursive-Case
			return Sum(pNode->mLeft) + pNode->mData + Sum(pNode->mRight);
			// #. 왼쪽 부분 집합의 합계 + 현재 데이터 + 오른쪽 부분 집합의 합계
		}

		bool Search(Node* pNode, int value)
		{
			if (pNode == nullptr)
			{
				return false;
			}

			return Search(pNode->mLeft, value) || pNode->mData == value || Search(pNode->mRight, value);
			// #. 왼쪽 부분 집합에서 찾아보고, 현재 데이터에서 찾아보고, 오른쪽 부분 집합에서 찾아보고
		}
	};
}