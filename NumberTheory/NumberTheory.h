#pragma once 

#ifdef NUMBERTHEORY_EXPORTS  
#define NT_API __declspec(dllexport)   
#else  
#define NT_API __declspec(dllimport)   
#endif  

class NT  
{  
	public:  
		static NT_API int GCD(int a, int b);
		static NT_API int LCD(int a, int b);
		static NT_API void ExtendedEuclid(int a, int b, int &x, int &y);
		static NT_API int ModularInverse(int a, int m);

		static NT_API bool isPrime(int n);
		static NT_API void Sieve(int n, int* V);
};  
