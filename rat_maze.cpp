#include<bits/stdc++.h>
#define N 4
using namespace std;

void printsolution(int sol[N][N])
{
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			cout<<sol[i][j]<<" ";
	    cout<<endl;	
	}
	
}

bool isSafe(int maze[N][N],int x,int y)
{
	if(x>=0 && x<N && y>=0 && y<N && maze[x][y]==1)
		return true;
	return false;
	
	
}

int solveMazeUtil(int maze[N][N],int x,int y,int sol[N][N])
{
	
	if(x==N-1 && y==N-1)
	{
		sol[x][y]=1;
		return 1;
	}
	if(isSafe(maze,x,y)==true){
		sol[x][y]=1;
	if(solveMazeUtil(maze,x+1,y,sol)==true)
		return true;
	if(solveMazeUtil(maze,x,y+1,sol)==true)
		return true;
	sol[x][y]=0;//backtrack
	return false;
	}
	return false;
	
	
}

void solveMaze(int maze[N][N])
{
	int sol[N][N]={{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0}
	};
	
	if(solveMazeUtil(maze,0,0,sol)==false)
	{
		cout<<"No solution exits\n";
		return;
	}
	printsolution(sol);
	return;
		
	
}
int main()
{
	 int maze[N][N]  =  { {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
 
    solveMaze(maze);
    return 0;
}







