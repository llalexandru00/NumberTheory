#include "pch.h"  
#include <iostream>
#include "IO.h"  
#include "NumberTheory.h"  
#include <iostream>

using namespace std;

int main()
{
	int n = 20;
	int V[21];
	NT::Sieve(n, V);
	IO::OArray(n, V);
	return 0;
}