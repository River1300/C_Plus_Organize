/* ----- < Binary Search Tree( BST ) > ----- */

/*
< BST > : 재귀호출, 즉 깊이우선이 편리하다라는 것에서 출발하여 착안한 자료구조
	#. 트리 내부는 항상 정렬된 상태를 유지한다.
		=> 원소를 추가하면 자동으로 정렬이 되는 구조( In_Order )
	#. 모든 노드는 최대 2개의 자식 노드를 가질 수 있다.
	#. 왼쪽 서브 트리는 노드보다 작은 값이다.
	#. 오른쪽 서브 트리는 노드보다 큰 값이다.
	#. 각 노드의 양쪽 서브트리는 BST를 만족해야한다.
	#. Log n
*/

#include <iostream>
#include "_2_binary_search_tree.h"

int main()
{	// #. BinarySearchTree 클래스의 객체가 생성되면 생성자에 의해 새로운 노드 공간이 생성된다.
	myTree::BinarySearchTree bst;

	// #. root 에 값 8을 저장한다.
	auto pRoot = bst.Insert(nullptr, 8);	// #. root 는 부모가 없기 때문에 nullptr 을 전달한다.
	bst.Insert(pRoot, 3);
	bst.Insert(pRoot, 10);
	bst.Insert(pRoot, 1);
	bst.Insert(pRoot, 6);		// #. Insert 를 Left, Roght 로 나누어서 호출할 필요가 없다.

	bst.In_Order(pRoot);

	std::cout << std::endl;
}