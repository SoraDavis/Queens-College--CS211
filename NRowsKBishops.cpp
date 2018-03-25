#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

bool isOk(int * q, int c, int n) 
{   
	for (int p = 0; p < c; p++) 
	{
        if(abs(q[p]/n - q[c]/n) == (abs(q[p]%n - q[c]%n)))  
		{
			return false;   //conflict on diagonal, go back and try next row 
		} 
	}
	
	if(q[c] == n*n)
	{
		return false;
	}
                                             
		return true; //this one's ok, return and move on to next column 
} 

int factorial(int n)
{
	//base case
	if(n == 1)
	{
		return n;
	}
	
	n = n*factorial(n-1);
	return n;
}
    
    
int main() {
int m = 1;
while(true)
{
		int n;
		cout<<"Please enter a value for n:"<<endl;
		cin>>n;
		
		if(n == -1)
		{
			break;
		}
		
		int k;
		cout<<"Please enter a value for number of bishops(k):"<<endl;
		cin>>k;
		
		if(k > n)
		{
			cout<<"The number of bishops must be less than or equal to n. Please try again."<<endl;
			cout<<"*************"<<endl;
			cout<<endl;
			continue;
		}	
		
		int *q = new int[k]();
	
		int c = 1;
		int counter = 0;
		q[0] = 0;

           
	while(c != -1){
	
		if (c == k)
		{ 
			counter++; 
			//cout<<"count"<<m++<<endl; 
			
			q[c] = 0;
			c--;
			
			if (c == -1)
			{
				cout<<"n -> "<<n<<endl;
				cout<<"k -> "<<k<<endl;	 
				cout<<"Number of solutions -> "<<counter/factorial(k)<<endl; 
				cout<<"**********************"<<endl; 
				delete[] q;
				//return 0;
				break;
			}
				
			/*if ((c == 0) && (q[c] == 7))
			{
				return 0;
			}*/
			q[c]++;	
	     }  
           
           
	
	if (isOk(q, c, n))
	{
		c++;
		
		if (c == k)
		{
			continue;
		}
	}
	
	else
	{
		
		if (q[c] == (n*n))
		{
			q[c] = 0;
			c--;
		
			if (c == -1)
			{
				cout<<"n -> "<<n<<endl;
				cout<<"k -> "<<k<<endl;	 
				cout<<"Number of solutions -> "<<counter/factorial(k)<<endl; 
				cout<<"**********************"<<endl; 
				delete[] q;
				//return 0;
				break;
			}
			
			q[c]++;	
		}
		
		else
		{
			q[c]++;
		}
	}
	
	
	}
}
	
}  
      
    


