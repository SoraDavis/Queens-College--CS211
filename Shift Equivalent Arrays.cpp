
#include <iostream>
#include<stdio.h>

	using namespace std;
	

static bool equivalent(int a[], int b[], int n)
	{
		int counter = 0;
		int counter2 = 0;
		//double array, when find a match, shift both to next
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if(counter == 5)
				{
					break;	
				}
				
				if (a[i] != b[j])
				{
				counter2++;
				}
				
				if (counter2 == n)
				{
					return false;	
				}
			
				while (a[i] == b[j])
				{
					//shift over and check next 
					i++;
					j++;
					
					if (i == n)
					{
						i = 0;
					}
					
					if (j == n)
					{
						j = 0;
					}
					counter++;
					
					if(counter == n)
					{
						break;
					}
				}
				
			}
		}
		
		return true;
	}
	
	int main() {
		
	int arr1 [5] = {16, 2, 77, 40, 5};
	int arr2 [5] = {77, 40, 5, 16, 2};

	bool a = equivalent (arr1, arr2, 5);
	
	if (a == true)
	{
		cout<<"These two arrays are shift equivalent!"<<endl;	
	}
	if (a == false)
	{
		cout<<"These two arrays are NOT shift equivalent."<<endl;	
	}

}


