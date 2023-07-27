/* ----- < 트리( TREE ) > ----- */

/*
Level 0							A			-( 출발지점 : root )
Level 1						B		C		-( parent node )
Level 2					D		E		G	-( child node )
Level 3				H		I				-( leaf node )

< 기본 원칙 >
	#. 트리의 원소를 노드( node )라고 부른다.
	#. 부모 노드와 자식 노드의 관계는 어떤 원소를 가리키냐에 따라, 그때 그때 다르다.
	#. 같은 레벨에 있는, 같은 부모를 갖는 노드들간의 관계를 sibling 관계라고 한다.
	#. 하나의 트리에는 오직 하나의 root node 만 존재한다.
	#. 두 node 를 연결하는 경로는 단 하나 뿐이다.
*/

/* --- < Binary Tree > --- */

/*
< Binary Tree > : 최대 2개의 자식을 가질 수 있는 트리를 말한다.
	#. < Full Binary Tree > : 자식이 있는 노드가 반드시 두 개의 자식을 가지고 있다.
	#. < Perfect Binary Tree > : 모든 노드가 두 개의 자식을 가지고 있다.
	#. < Complete Binary Tree > : 마지막 레벨을 제외한 모든 레벨의 노드가 있고, 추가될 때는 왼쪽부터 채운다.
*/

#include <iostream>
#include "BinaryTree.h"

int main()
{	// #. BinaryTree 클래스의 객체가 생성되면 생성자에 의해 새로운 노드 공간이 생성된다.
	MyTree::BinaryTree myTree;

	// #. 루트 노드를 가리키는 포인터 pRoot 를 먼저 만들어 준다.
	auto pRoot = myTree.GetRoot();
	pRoot->mData = 1;	// #. pRoot 루트 노드에 값 1을 저장해 준다.

// #. 값 2가 들어있는 노드를 가리키는 포인터 pNode 를 먼저 만들어 준다.
	auto pNode = myTree.InsertLeft(pRoot, 2);	// #. 루트 노드에서 왼쪽으로 자식 노드를 만든다.
	myTree.InsertLeft(pNode, 4);	// #. pNode 부모 노드의 왼쪽으로 자식 노드를 만든다.
	myTree.InsertRight(pNode, 5);	// #. pNode 부모 노드의 오른쪽으로 자식 노드를 만든다.

	pNode = myTree.InsertRight(pRoot, 3);
	myTree.InsertLeft(pNode, 6);
	myTree.InsertRight(pNode, 7);

	myTree.DepthFirst();	std::cout << std::endl << std::endl;
	myTree.Pre_Order(myTree.GetRoot());	std::cout << std::endl << std::endl;
	myTree.BreadthFirst();	std::cout << std::endl << std::endl;

	std::cout << myTree.Search(myTree.GetRoot(), 3) << std::endl << std::endl;
	std::cout << myTree.Sum(myTree.GetRoot()) << std::endl << std::endl;
}