/* ----- < Binary Search Tree( BST ) > ----- */

/*
< BST > : ���ȣ��, �� ���̿켱�� ���ϴٶ�� �Ϳ��� ����Ͽ� ������ �ڷᱸ��
	#. Ʈ�� ���δ� �׻� ���ĵ� ���¸� �����Ѵ�.
		=> ���Ҹ� �߰��ϸ� �ڵ����� ������ �Ǵ� ����( In_Order )
	#. ��� ���� �ִ� 2���� �ڽ� ��带 ���� �� �ִ�.
	#. ���� ���� Ʈ���� ��庸�� ���� ���̴�.
	#. ������ ���� Ʈ���� ��庸�� ū ���̴�.
	#. �� ����� ���� ����Ʈ���� BST�� �����ؾ��Ѵ�.
	#. Log n
*/

#include <iostream>
#include "_2_binary_search_tree.h"

int main()
{	// #. BinarySearchTree Ŭ������ ��ü�� �����Ǹ� �����ڿ� ���� ���ο� ��� ������ �����ȴ�.
	myTree::BinarySearchTree bst;

	// #. root �� �� 8�� �����Ѵ�.
	auto pRoot = bst.Insert(nullptr, 8);	// #. root �� �θ� ���� ������ nullptr �� �����Ѵ�.
	bst.Insert(pRoot, 3);
	bst.Insert(pRoot, 10);
	bst.Insert(pRoot, 1);
	bst.Insert(pRoot, 6);		// #. Insert �� Left, Roght �� ����� ȣ���� �ʿ䰡 ����.

	bst.In_Order(pRoot);

	std::cout << std::endl;
}