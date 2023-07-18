#pragma once

/*
< FIRST_STEP_�Ϲ�ȭ > : ���³� �ൿ�� �߿��� '����'�̶�� �Ϲ� �������� �ø� �� �ִ� ���� ��� Ŭ������ �����Ѵ�.
	#. Dog��ü�� �����ϱ� ���� �پ��� ����/�ൿ�� �����Ѵ�.
	#. �� �� Dog��ü�� ���ԵǸ鼭 ������ �Ϲ����� ����/�ൿ�� ��Ÿ���� ������ ���� Ŭ������ �����ش�.
*/

class Animal
{
protected:
	// #. < is-a > ���迡�� private�θ�� ������ ���� ��� ����� �ʵǱ� ������ protected�� ���� �ش�.
	// #. protected���� �����ڴ� Ŭ���� �ܺο����� ������ ������ ��ӵ� Ŭ���� ���ο����� ������ �����ϴ�.
	int mAge;
	int mWeight;	// ����� �� �ִ� ����� ����

public:
	Animal();
	Animal(int age, int weight);
	~Animal();

	int GetAge() const;		// ��� ������ ��ȯ�����ְ� ���� �ٲ����� ���� ���̴�.
	void SetAge(int age);	// �Ű� ������ �ް� ��������� �ٲ��ش�.
	int GetWeight() const;
	void SetWeight(int weight);

	void Sound();	// ����� �� �ִ� ����� �ൿ
};