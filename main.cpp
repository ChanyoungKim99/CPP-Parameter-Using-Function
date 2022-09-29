#include <iostream>

// ���� �Լ��� ������ ���� �����̶��,
// int x;			 Ÿ���� int�̰�, �ĺ��ڰ� x
// int f(int x);	 Ÿ���� int (int x) �̰�, �ĺ��ڰ� f


int Sigma(int f(int x), int start, int end)
{
	int sum;

	for (int i = start; i <= end; i++)
	{
		sum += f(i);
	}

	return sum;
}

// f(x) = x
int f(int x)
{
	return x;
}

// g(x) = x * x;
int g(int x)
{
	return x * x;
}

int main()
{
	std::cout << Sigma(f, 1, 10) << std::endl;
	std::cout << Sigma(g, 1, 10) << std::endl;
}

// �Լ��� ����ó�� Ȱ���� ��
// ������ �̰� call by value ���
// f�� 2���� ���ܹ�����.