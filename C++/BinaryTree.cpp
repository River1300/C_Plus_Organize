/* ----- < Ʈ��( TREE ) > ----- */

/*
Level 0							A			-( ������� : root )
Level 1						B		C		-( parent node )
Level 2					D		E		G	-( child node )
Level 3				H		I				-( leaf node )

< �⺻ ��Ģ >
	#. Ʈ���� ���Ҹ� ���( node )��� �θ���.
	#. �θ� ���� �ڽ� ����� ����� � ���Ҹ� ����Ű�Ŀ� ����, �׶� �׶� �ٸ���.
	#. ���� ������ �ִ�, ���� �θ� ���� ���鰣�� ���踦 sibling ������ �Ѵ�.
	#. �ϳ��� Ʈ������ ���� �ϳ��� root node �� �����Ѵ�.
	#. �� node �� �����ϴ� ��δ� �� �ϳ� ���̴�.
*/

/* --- < Binary Tree > --- */

/*
< Binary Tree > : �ִ� 2���� �ڽ��� ���� �� �ִ� Ʈ���� ���Ѵ�.
	#. < Full Binary Tree > : �ڽ��� �ִ� ��尡 �ݵ�� �� ���� �ڽ��� ������ �ִ�.
	#. < Perfect Binary Tree > : ��� ��尡 �� ���� �ڽ��� ������ �ִ�.
	#. < Complete Binary Tree > : ������ ������ ������ ��� ������ ��尡 �ְ�, �߰��� ���� ���ʺ��� ä���.
*/

#include <iostream>
#include "BinaryTree.h"

int main()
{	// #. BinaryTree Ŭ������ ��ü�� �����Ǹ� �����ڿ� ���� ���ο� ��� ������ �����ȴ�.
	MyTree::BinaryTree myTree;

	// #. ��Ʈ ��带 ����Ű�� ������ pRoot �� ���� ����� �ش�.
	auto pRoot = myTree.GetRoot();
	pRoot->mData = 1;	// #. pRoot ��Ʈ ��忡 �� 1�� ������ �ش�.

// #. �� 2�� ����ִ� ��带 ����Ű�� ������ pNode �� ���� ����� �ش�.
	auto pNode = myTree.InsertLeft(pRoot, 2);	// #. ��Ʈ ��忡�� �������� �ڽ� ��带 �����.
	myTree.InsertLeft(pNode, 4);	// #. pNode �θ� ����� �������� �ڽ� ��带 �����.
	myTree.InsertRight(pNode, 5);	// #. pNode �θ� ����� ���������� �ڽ� ��带 �����.

	pNode = myTree.InsertRight(pRoot, 3);
	myTree.InsertLeft(pNode, 6);
	myTree.InsertRight(pNode, 7);

	myTree.DepthFirst();	std::cout << std::endl << std::endl;
	myTree.Pre_Order(myTree.GetRoot());	std::cout << std::endl << std::endl;
	myTree.BreadthFirst();	std::cout << std::endl << std::endl;

	std::cout << myTree.Search(myTree.GetRoot(), 3) << std::endl << std::endl;
	std::cout << myTree.Sum(myTree.GetRoot()) << std::endl << std::endl;
}