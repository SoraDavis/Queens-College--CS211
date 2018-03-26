#include <iostream>
#include <string>
using namespace std;

int main() {

	cout<<"Please enter a string of uppercase letters indicating the results of the race (type 'done' when you have finished entering):" << endl;
	//Scanner in from user (String-characters) 
	string input;
 	cin >> input;
	
	double team[26] = {0.0};
	double score[26] = {0.0};
	int counter = 0, firstTeam = 0, tempLocation = 0;
	double scores = 0.0, temp = 100.0;
	
	while (input != "done")
	{
		for (int i = 0; i < input.length(); i++)
		{
			switch (input[i])
			{
				case 'A':
					team[0]++;
					score[0] += i+1;
					break;
				case 'B':
					team[1]++;
					score[1] += i+1;
					break;
				case 'C':
					team[2]++;
					score[2] += i+1;
					break;
				case 'D':
					team[3]++;
					score[3] += i+1;
					break;
				case 'E':
					team[4]++;
					score[4] += i+1;
					break;
				case 'F':
					team[5]++;
					score[5] += i+1;
					break;
				case 'G':
					team[6]++;
					score[6] += i+1;
					break;
				case 'H':
					team[7]++;
					score[7] += i+1;
					break;
				case 'I':
					team[8]++;
					score[8] += i+1;
					break;
				case 'J':
					team[9]++;
					score[9] += i+1;
					break;
				case 'K':
					team[10]++;
					score[10] += i+1;
					break;
				case 'L':
					team[11]++;
					score[11] += i+1;
					break;
				case 'M':
					team[12]++;
					score[12] += i+1;
					break;
				case 'N':
					team[13]++;
					score[13] += i+1;
					break;
				case 'O':
					team[14]++;
					score[14] += i+1;
					break;
				case 'P':
					team[15]++;
					score[15] += i+1;
					break;
				case 'Q':
					team[16]++;
					score[16] += i+1;
					break;
				case 'R':
					team[17]++;
					score[17] += i+1;
					break;
				case 'S':
					team[18]++;
					score[18] += i+1;
					break;
				case 'T':
					team[19]++;
					score[19] += i+1;
					break;
				case 'U':
					team[20]++;
					score[20] += i+1;
					break;
				case 'V':
					team[21]++;
					score[21] += i+1;
					break;
				case 'W':
					team[22]++;
					score[22] += i+1;
					break;
				case 'X':
					team[23]++;
					score[23] += i+1;
					break;
				case 'Y':
					team[24]++;
					score[24] += i+1;
					break;
				case 'Z':
					team[25]++;
					score[25] += i+1;
					break;
			}
				
		}
	
		cin>>input;
		
		for (int k = 0; k < 26; k++)
		{
			if (team[k] != 0)
			{
				firstTeam = k;
				break;
			}
		}
		
		for (int i = firstTeam; i < 26; i++)
		{
			if (team[i] != 0)
			{
				if (team[i] != team[firstTeam])
				{
					cout<<"Your teams are not even. Please try again."<<endl;
					for (int w = 0; w < 26; w++)
					{
						team [w] = 0;
						score [w] = 0;
					}
					//input = "hi";
					counter = 0;
				
				}
			
			}
		}
		
	}

	cout<<"********************************"<<endl;
	cout<<"Scores:"<<endl;
	
	for (int j = 0; j < 26; j++)
		{
			if (team[j] != 0)
			{
				counter++;
				cout<<char(j+65);
				scores = score[j]/team[j];
				cout<<" "<<scores<<endl;
				
				if (scores < temp)
				{
					tempLocation = j;
					temp = scores;	
				}
			}
		}
	cout<<"********************************"<<endl;
	cout<<"There are "<<counter<<" teams."<<endl;
	cout<<"There are "<<team[firstTeam]<<" runners on each team."<<endl;
	cout<<"The winning team is "<<	char(tempLocation + 65)<<" with a score of "<<temp<<endl;
	
}
	
	
       




