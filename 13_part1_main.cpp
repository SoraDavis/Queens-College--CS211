#include <iostream> 
#include <cmath> 
#include <cstdlib>

using namespace std; 

bool ok(int * q, int c) 
{   
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
		
	//Already Used test:
	for (int i = 0; i < c; i++)
	{
		if (q[i] == q[c])
		{	
			return false;
		}
	}

		for(int i = 0; a[c][i] != -1; i++)
		{
			//Consecutive Numbers test:
			if (abs((q[c] - q[a[c][i]])) == 1)
			{ 
				return false;
			}
			
		}  
		return true;
}
	
	void print(int *q) 
	{ 
		static int count = 0; 
    	cout<<"Solution #"<<++count<<":"<<endl;
    	
		for (int k=0; k<8; k++) 
		{
        	cout<<q[k]<<" ";  
		}
		cout<<endl;
		cout<<"* * * * * * * *"<<endl;
	}
	
	void move(int* q, int i) // try place in col i 
	{ 
            if(i==8)                        
            {        
                print(q);            
                return;            
            }    
            
	for(int j=1;j<9;j++)  
    	{	 
			q[i]=j; 
		           
		     if(ok(q,i))
			 {
				move(q,i+1);
			 } // go to next column otherwise try next j 
    	}            
    // no value of j worked so return; 
	}
	
	int main() 
	{ 
        int q[8];   
		//q[0] = 0;        
        move(q,0);            
        system("exit");   
	}

