#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

bool isOk (int q[], int c)
    {
    	for (int i = 0; i < c; i++) 
		{
			if (q[c] == q[i] || (c-i) == abs(q[c]-q[i])) 
			
			{
				//cout<<abs(q[c]-q[i])<<endl;
				return false;
				
			}
			if (q[c] == 8)
			{
				return false;
			}	
		}
		
		return true;
    }
    
void print (int q[], int c)
    {
    	for (int i = 0; i < 8; i++)
    	{
    		cout<<q[i]<<" ";
    	}
    	
    	cout<<endl;
    }
    
    
int main() {
	
	int q[8]= {0}, c = 1, counter = 1;
	q[0] = 0;

           
	while(c != -1){
	
		if (c == 8)
		{
				
			cout<<"Solution # " <<counter<< ":"<<endl;
			
			print(q, c); 
			counter++; 
			
			q[c] = 0;
			c--;
			
			if (c == -1)
			{
				//return 0;
				break;
			}
				
			if ((c == 0) && (q[c] == 7))
			{
				return 0;
			}
			q[c]++;	
	     }  
           
           
	
	if (isOk(q, c))
	{
		c++;
		
		if (c == 8)
		{
			continue;
		}
	}
	
	else
	{
		
		if (q[c] == 8)
		{
			q[c] = 0;
			c--;
		
			if (c == -1)
			{
				//return 0;
				break;
			}
			
			if ((c == 0) && (q[c] == 7))
			{
				return 0;
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
      
    


