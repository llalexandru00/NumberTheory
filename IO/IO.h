#pragma once 

#ifdef IO_EXPORTS  
#define IO_API __declspec(dllexport)   
#else  
#define IO_API __declspec(dllimport)   
#endif  

class IO
{
	public:
		static IO_API void OArray(int n, int* V);
};
