#include<iostream> 

using namespace std;
 
const int rows = 5; 
const int cols = 6;

 // i is the row, j is the column 
 static int weight[rows][cols]={ 
        {3,4,1,2,8,6}, 
        {6,1,8,2,7,4}, 
        {5,9,3,9,9,5}, 
        {8,4,1,3,2,6}, 
        {3,7,2,8,6,4}};
        
 //array to be filled with least cost values for each location      
 static int memo[rows][cols] = {
        {3,0,0,0,0,0}, 
        {6,0,0,0,0,0}, 
        {5,0,0,0,0,0}, 
        {8,0,0,0,0,0}, 
        {3,0,0,0,0,0}}; 

 //array to contain row location of shortest path
static int path[cols];
 
int cost(int i, int j)
{   
        //base case 
            if(j == 0) 
            return memo[i][0]; 
            
        // recursive call 
        if (memo [i][j] != 0)
        {
        	return memo[i][j];
        }
        
 	        int left = cost((i), (j-1)) + weight[i][j];
	        int  up  = cost((i+4)%5, (j-1)) + weight[i][j]; //-1 mod(5) is equiv. to 4 mod(5) and returns pos. value
	        int down = cost((i+1)%5, (j-1)) + weight[i][j];
			 
	        // find the value of the shortest path through cell (i,j) 
	        int min = left;
	        
	 		if (up < min)
	 		{
	 			min = up;
	 		}
	 		if (down < min)
	 		{
	 			min = down;
	 		}
	 		
	 		memo[i][j] = min;
	        return memo[i][j];

} 
	//find path, using memo and knowledge of exit row
	int findPath (int i, int j, int p)
	{
		int row;
		
		if (j == 0)
		{
			return i;
		}
		
			//int row = 0;
			int left = memo[i%5][j-1];//findPath(i%5, j-1); 
			int up = memo[(i-1)%5][j-1];//findPath((i-1)%5, j-1);
			int down = memo[(i+1)%5][j-1];//findPath((i+1)%5, j-1);
			
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
	 		
	 		//recursive call
	        findPath(row, j-1, p-1);
	        
	        return row;
		}
        
int main(){ 


    int ex[rows]; 
    
    // get the shortest path out of each cell on the right 
	for( int i = 0; i < rows; i++) 
			ex[i] = cost(i, cols-1); 
			

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
	
	//find row location of exit spot
	for (int i = 1; i < rows; i++)
	{
		if(ex[i] == min)
		{
			exit = i;
			break;	
		}	
	}

	findPath(exit, cols-1, 4);
		
		//we know the last row number
		path[cols-1] = exit;
			
	cout<<"The shortest path is:"<<endl;
	for(int i = 0; i <= cols-1; i++)
	{
		cout<<weight[path[i]][i]<<" ";
	}
	cout<<endl;
	cout<<"************"<<endl;
	
    cout<<"The shortest path is of length "<<min<<"."<<endl;
	return 0; 
}   

