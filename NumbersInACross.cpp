#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;


    int main( ) {
	
      int c = 0;
	  int q[8] = {0};
      q[0] = 1;
	  int a[8][5] = {
    	{-1},
    	{0,-1},
    	{0,1,-1},
    	{0,1,2,-1},
    	{1,2,3,-1},
    	{0,3,4,-1},
    	{3,4,5,-1},
    	{2,4,6,-1}
   		};
	
		
	newNum: q[c]++;
	
	    if (q[c] == 9)
	    {
		goto backtrack;
		}
		if (c == 8)
		{
			goto print;
		}
	
	
	//Already Used test:
	
	for (int i = 0; i < c; i++)
	{
		if (q[i] == q[c])
		{
			goto newNum;
		}
	}
	
	for(int i = 0; i < 9; i ++)
	{
		while (a[c][i] != -1)
		{
			//Consecutive Numbers test:
			if (abs((q[c] - q[a[c][i]])) == 1)
			{
				goto newNum;
			}
			else
			{
				i++;
			}
			
		}
		
		c++;
		goto newNum;
	}

		
	backtrack:
		
		q[c] = 0;
		c--;
			
		goto newNum;
			
	print : 
	
		cout<<"Solution: "<<endl;
		
		for (int i = 0; i < 8; i++)
	    	{
	    		cout<<q[i]<<" ";
	    	}
	    	
	   	cout<<endl;
	}
	    

