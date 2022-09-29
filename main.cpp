#include <iostream>

// 만약 함수가 변수와 같은 유형이라면,
// int x;			 타입이 int이고, 식별자가 x
// int f(int x);	 타입이 int (int x) 이고, 식별자가 f


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

// 함수를 변수처럼 활용한 것
// 하지만 이건 call by value 방식
// f가 2개가 생겨버린다.