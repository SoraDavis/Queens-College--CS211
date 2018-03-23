#include <iostream>

using namespace std;

int fib(int n, int *arr)
{
	if(n <= 2)
	{
		return 1;
	}
	if(arr[n] == 0)
	{
		arr[n] = fib(n-1,arr) + fib(n-2,arr);
	}
		return arr[n];

	
}

int main()
{
	int n = 10;
	
	int* array = new int[n+1];
	
	for(int j = 0; j < n+1; j++)
	{
		array[j] = 0;
	}
	cout<<"The "<<n<<"th fibonacci number is: "<<fib(n, array);
	delete[] array;

	
}



