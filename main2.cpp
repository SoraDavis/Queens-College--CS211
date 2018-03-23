#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main(){
	
	int i,j,k,l;
       typedef char box[5][7];
       box bb,wb,*board[8][8];
       box bq, wq;
       
       //fill in bb=black box and wb=whitebox
       for(i = 0; i < 5; i++)
		for(j = 0; j < 7; j++)
               {
			   wb[i][j] = ' ';
			   
			   wq[i][j] = ' ';
			   wq[1][1] = char(219);
			   wq[2][1] = char(219);
			   wq[3][1] = char(219);
			   wq[3][2] = char(219);
			   wq[3][3] = char(219);
			   wq[3][4] = char(219);
			   wq[3][5] = char(219);
			   wq[2][3] = char(219);
			   wq[1][3] = char(219);
			   wq[1][5] = char(219);
			   wq[2][5] = char(219);
			   
               bb[i][j] = char(219);
               
               bq[i][j] = char(219);
               bq[1][1] = ' ';
			   bq[2][1] = ' ';
			   bq[3][1] = ' ';
			   bq[3][2] = ' ';
			   bq[3][3] = ' ';
			   bq[3][4] = ' ';
			   bq[3][5] = ' ';
			   bq[2][3] = ' ';
			   bq[1][3] = ' ';
			   bq[1][5] = ' ';
			   bq[2][5] = ' ';
               }
       //fill board with pointers to bb and wb in alternate positions
       for(i = 0; i < 8; i++)
		for(j = 0; j < 8; j++)
             if((i+j)%2==0)
				board[i][j] = &wb;
             else 
                board[i][j] = &bb;  
				
		for(i = 0; i < 8; i++)  
			{
				if((q[i] + i) % 2 == 0)
					board[q[i]][i] = &wq;
				else
					board[q[i]][i] = &bq;
			} 
       // print the board via the pointers in array board
       // first print upper border
       cout<<"     ";
       
       for(i=0;i<7*8;i++)
			cout<<'_';
       		cout<<endl;
       		
       // now print the board
       for(i=0;i<8;i++)
			for(k=0;k<5;k++)
               {cout<<"     "<<char(179); //print left border
				for(j=0;j<8;j++)
                       for(l=0;l<7;l++)
                               cout<<(*board[i][j])[k][l];
								cout<<char(179)<<endl; // at end of line print bar and then newline
               }
               
       //before exiting print lower border
       cout<<"     ";
       
       for(i=0;i<7*8;i++)
			cout<<char(196);
       		cout<<endl;
       }
