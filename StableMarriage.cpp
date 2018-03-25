#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

bool isOk (int q[], int c)
    {
    		int mp[3][3]={0,2,1,
						0,2,1,
						1,2,0};
			int wp[3][3]={2,1,0,
						0,1,2,
						2,0,1};
				
    	for (int i = 0; i < c; i++) 
		{
			//row test
			if (q[c] == q[i]) 
			
			{
				//cout<<abs(q[c]-q[i])<<endl;
				return false;
				
			}
			

			if ((mp[i][q[c]] < mp[i][q[i]]) &&	(wp[q[c]][i] < wp[q[c]][c]))	
			{
				return false;
			}
			
			if ((mp[c][q[i]] < mp[c][q[c]]) &&	(wp[q[i]][c] < wp[q[i]][i]))	
			{
				return false;
			}
			
			if (q[c] == 3)
			{
				return false;
			}	
		}
		
		return true;
    }
    
void print (int q[], int c)
    {
    	for (int i = 0; i < 3; i++)
    	{
    		cout<<q[i]<<" ";
    	}
    	
    	cout<<endl;
    }
    
    
int main() {
	
	int q[3] = {0}, c = 1, counter = 1;
	q[0] = 0;


           
	while(c != -1){
	
		if (c == 3)
		{
				
			cout<<"Solution # " <<counter<< ":"<<endl;
			
			print(q, c); 
			counter++; 
			
			q[c] = 0;
			c--;
			
			if (c == -1)
			{
				return 0;
			}
				
			if ((c == 0) && (q[c] == 2))
			{
				return 0;
			}
			q[c]++;	
	     }  
           
           
	
	if (isOk(q, c))
	{
		c++;
		
		if (c == 3)
		{
			continue;
		}
	}
	
	else
	{
		
		if (q[c] == 3)
		{
			q[c] = 0;
			c--;
		
			if (c == -1)
			{
				return 0;
			}
			
			if ((c == 0) && (q[c] == 2))
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
      
    

