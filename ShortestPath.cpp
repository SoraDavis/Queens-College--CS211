#include <iostream>

using namespace std;
 
const int rows = 5; 
const int cols = 6;
 
 static int weight[rows][cols]={ 
        {3,4,1,2,8,6}, 
        {6,1,8,2,7,4}, 
        {5,9,3,9,9,5}, 
        {8,4,1,3,2,6}, 
        {3,7,2,8,6,4}};
 
 //saved weight array; needed to calculate exact path later       
 static int weight_saved[rows][cols]={ 
        {3,4,1,2,8,6}, 
        {6,1,8,2,7,4}, 
        {5,9,3,9,9,5}, 
        {8,4,1,3,2,6}, 
        {3,7,2,8,6,4}};
        
        
 static int path[cols];
 
 int findPath (int i, int j, int p)
	{
		int row;
		
		if (j == 0)
		{
			return i;
		}
		
			//int row = 0;
			int left = weight[i%5][j-1]; 
			int up = weight[(i-1)%5][j-1];
			int down = weight[(i+1)%5][j-1];
			
			int min = left;
			row = i%5;
	        
	 		if (up < min)
	 		{
	 			min = up;
	 			row = (i-1)%5;
	 			
	 		}
	 		if (down < min)
	 		{
	 			min = down;
	 			row = (i+1)%5;
	 		}
	 		
	 			path[p] = row;
	 	
	        findPath(row, j-1, p-1);
	        
	        return row;
		}
        
 
 int main(){
 	
 	for(int j = 1; j < cols; j++)
 	{
 		for(int i = 0; i < rows; i++)
 		{
 			int left = weight[i%5][j-1]; 
			int up = weight[(i+4)%5][j-1];
			int down = weight[(i+1)%5][j-1];
			
			int min = left;
	        
	 		if (up < min)
	 		{
	 			min = up;
	 		}
	 		if (down < min)
	 		{
	 			min = down;
	 		}
	 		
 			weight[i][j] = weight[i][j] + min;
 		}
 	}
 	

	int ex[rows]; 
     
	for(int i = 0; i < rows; i++)
	{
		ex[i] = weight[i][cols-1];
	}		

    // now find the smallest of them 
    int min = ex[0];
    int exit = 0;
    
    for (int i = 1; i < rows; i++)
	{
    	if (ex[i] < min)
    	{
    		min = ex[i];
    	}
	}
	
	//find row the path exits from
		for (int i = 1; i < rows; i++)
	{
		if(ex[i] == min)
		{
			exit = i;
			break;	
		}	
	}

	//find exact path through the array
	findPath(exit, cols-1, 4);
		
		path[cols-1] = exit;
		
	cout<<"The shortest path is:"<<endl;	
	for(int i = 0; i <= cols-1; i++)
	{
		cout<<weight_saved[path[i]][i]<<" ";
	}
	cout<<endl;
	cout<<"*******************"<<endl;
	 
    cout<<"The shortest path is of length "<<min<<"."<<endl;

    return 0; 
 }
