#include "stdafx.h"  
#include "NumberTheory.h"  

int NT::GCD(int a, int b)
{
	return b == 0 ? a : GCD(b, a%b);
}

int NT::LCD(int a, int b)
{
	return a * b / GCD(a, b);
}

void NT::ExtendedEuclid(int a, int b, int &x, int &y)
{
	if (!b)
	{
		x = 1;
		y = 0;
		return;
	}
	ExtendedEuclid(b, a%b, x, y);
	int aux = x;
	x = y;
	y = aux - y * (a / b);
}

int NT::ModularInverse(int a, int m)
{
	int x = 0, y = 0;
	ExtendedEuclid(a, m, x, y);
	while (x < 0) x += m;
	return x;
}

void NT::Sieve(int n, int* V)
{
	memset(V, 0, n*sizeof(V));
	V[0] = V[1] = 1;
	for (long long i = 2; i <= n; i++)
		if (V[i] == 0)
			for (long long j = i * i; j <= n; j += i)
				V[j] = 1;
}

bool NT::isPrime(int n)
{
	if (n < 2 || (n % 2 == 0 && n != 2)) return 0;
	for (int i = 3; i*i <= n; i += 2)
		if (n%i == 0)
			return 0;
	return 1;
}
