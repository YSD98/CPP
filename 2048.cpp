#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<math.h>
using namespace std;

void upmove(int matrix[4][4])
{
	int i, j, i_next, j_next;
	for(j=0;j<4;j++)
	{
		i_next=0, j_next=j;
		for(i=1;i<4;i++)
		{
			if(matrix[i][j]!=0)
			{
				if(matrix[i-1][j]==0 || matrix[i-1][j]==matrix[i][j])
				{
					if(matrix[i_next][j_next]==matrix[i][j])
					{
						matrix[i_next][j_next]*=2;
						matrix[i][j]=0;
					}
					else
					{
						if(matrix[i_next][j_next]==0)
						{
							matrix[i_next][j_next]=matrix[i][j];
							matrix[i][j]=0;
						}
						else
						{
							matrix[++i_next][j_next]=matrix[i][j];
							matrix[i][j]=0;
						}
					}
				}
				else i_next++;
			}
		}
	}
}

void downmove(int matrix[4][4])
{
	int i,j,i_next,j_next;
	for(j=0;j<4;j++)
	{
		i_next=3,j_next=j;
		for(i=2;i>=0;i--)
		{
			if(matrix[i][j]!=0)
			{
				if(matrix[i+1][j]==0 || matrix[i+1][j]==matrix[i][j])
				{
					if(matrix[i_next][j_next]==matrix[i][j])
					{
						matrix[i_next][j_next]*=2;
						matrix[i][j]=0;
					}
					else
					{
						if(matrix[i_next][j_next]==0)
						{
							matrix[i_next][j_next]=matrix[i][j];
							matrix[i][j]=0;
						}
						else
						{
							matrix[--i_next][j_next]=matrix[i][j];
							matrix[i][j]=0;
						}
					}
				}
				else i_next--;
			}
		}
	}
}

void leftmove(int matrix[4][4])
{
	int i,j,i_next,j_next;
	for(i=0;i<4;i++)
	{
		i_next=i,j_next=0;
		for(j=1;j<4;j++)
		{
			if(matrix[i][j]!=0)
			{
				if(matrix[i][j-1]==0 || matrix[i][j-1]==matrix[i][j])
				{
					if(matrix[i_next][j_next]==matrix[i][j])
					{
						matrix[i_next][j_next]*=2;
						matrix[i][j]=0;
					}
					else
					{
						if(matrix[i_next][j_next]==0)
						{
							matrix[i_next][j_next]=matrix[i][j];
							matrix[i][j]=0;
						}
						else
						{
							matrix[i_next][++j_next]=matrix[i][j];
							matrix[i][j]=0;
						}
					}
				}
				else j_next++;
			}
		}
	}
}

void rightmove(int matrix[4][4])
{
	int i,j,i_next,j_next;
	for(i=0;i<4;i++)
	{
		i_next=i,j_next=3;
		for(j=2;j>=0;j--)
		{
			if(matrix[i][j]!=0)
			{
				if(matrix[i][j+1]==0 || matrix[i][j+1]==matrix[i][j])
				{
					if(matrix[i_next][j_next]==matrix[i][j])
					{
						matrix[i_next][j_next]*=2;
						matrix[i][j]=0;
					}
					else
					{
						if(matrix[i_next][j_next]==0)
						{
							matrix[i_next][j_next]=matrix[i][j];
							matrix[i][j]=0;
						}
						else
						{
							matrix[i_next][--j_next]=matrix[i][j];
							matrix[i][j]=0;
						}
					}
				}
				else j_next--;
			}
		}
	}
}

void addblock(int matrix[4][4])
{
	int i_next,j_next;
	srand(time(0));
	while(1)
	{
		i_next=rand()%4;
		j_next=rand()%4;
		if(matrix[i_next][j_next]==0)
		{
			matrix[i_next][j_next]=pow(2,i_next%2 + 1);
			break;
		}
	}

}

void display(int matrix[4][4])
{
	cout<<"\n\t\tPress Esc anytime to quit the game";
	cout<<"\n\n\n\n";
	int i,j;
	for(i=0;i<4;i++)
	{
		cout<<"\t\t\t\t-----------------\n\t\t\t\t";
		for(j=0;j<4;j++)
		{
			if(matrix[i][j]==0) cout<<"|   ";
			else
				cout<<"| "<<matrix[i][j]<<" ";
		}
		cout<<"|"<<endl;
	}
	cout<<"\t\t\t\t-----------------\n";
}

int check(int temp[4][4],int matrix[4][4])
{
	int fmove=1,i,j;
	for(i=0;i<4;i++)
    	for(j=0;j<4;j++)
    		if(temp[i][j]!=matrix[i][j])
    		{
    			fmove=0;
    			break;
			}
	return fmove;
}

int checkover(int matrix[4][4])
{
	int fmove=0,over=0,i,j;
	for(i=0;i<4;i++)
    	for(j=0;j<4;j++)
    		if(matrix[i][j]==0)
    		{
    			fmove=1;
				break;	
			}
			
	for(i=0;i<3;i++)
    	for(j=0;j<3;j++)
    		if(matrix[i+1][j]==matrix[i][j] || matrix[i][j+1]==matrix[i][j])
    		{
    			over=1;
    			break;
			}
			
	if(fmove || over) 
		return 1;
	else 
		return 0;
}

int main()
{
	cout<<"\n\n\n\n\t\t\t2048 GAME\n\n\n\t\tDeveloped by Swati and Yash\n\n\n\t\tPress any key to continue";
	getch();
	system("cls");
	int r1, c1, r2, c2, i, j, ch;
	int matrix[4][4]={0},temp[4][4]={0};
	srand(time(0));
	r1=rand()%4;
	c1=rand()%4;
	while(1)
	{
		r2=rand()%4;
		c2=rand()%4;
		if(r2!=r1 && c2!=c1) 
			break;
	}
	matrix[r1][c1]=2;
	matrix[r2][c2]=4;
	display(matrix);

	while(1)
    {
    	for(i=0;i<4;i++)
    		for(j=0;j<4;j++)
    			temp[i][j]=matrix[i][j];
    	ch=getch();
    	system("cls");
    	if(ch==72) 
			upmove(matrix);
    	if(ch==80) 
			downmove(matrix);
    	if(ch==75) 
			leftmove(matrix);
    	if(ch==77) 
			rightmove(matrix);
		if(ch==27) 
			break;
		
		if(!check(temp,matrix))
			addblock(matrix);
		display(matrix);
			
		if(!checkover(matrix))
		{
			cout<<"\n\n\t\t\tGAME OVER!!\n\n\n";
			getch();
			break;
		}	
	}
	return 0;
}
