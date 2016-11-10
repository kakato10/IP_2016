using namespace std;

#include <iostream>

unsigned long long factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

unsigned long long factorial_iter(int n)
{
	unsigned long long result = 1;
	for (int i = n; i > 1; i--)
	{
		result *= i;
	}
	return result;
}

int gcd(int a, int b)
{
	if (a == b)
		return a;
	else if (a > b)
		return gcd(a - b, b);
	else
		return gcd(a, b - a);
}


int fib(int n)
{
	if (n == 0 || n == 1)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

double power(double n, int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
		return n * power(n, k - 1);
	else
		return 1 / (power(n, -k));
}
