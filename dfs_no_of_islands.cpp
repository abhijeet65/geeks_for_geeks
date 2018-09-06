#include<bits/stdc++.h>
#include<algorithm>
#define N 5

using namespace std;


bool isSafe(int mat[N][N],int x,int y,bool visited[N][N])
{
	if(x>=0 && x<N && y>=0 && y<N && mat[x][y] && !visited[x][y])
		return true;
	return false;
}


void dfs(int mat[N][N],int i,int j,bool visited[N][N])
{
	
	visited[i][j]=true;
	
	int row[]={-1,-1,-1,0,0,1,1,1};
	int col[]={-1,0,1,-1,1,-1,0,1};
	int k;
	
	for(k=0;k<8;k++)
	{
		if(isSafe(mat,row[k]+i,col[k]+j,visited)==true)
		{
			dfs(mat,row[k]+i,col[k]+j,visited);
		}
		
	}
	
	
	
}

int main()
{
	
	int mat[N][N] = {{1, 1, 0, 1, 0},
                   {0, 1, 0, 0, 1},
                   {1, 0, 0, 1, 1},
                   {0, 0, 0, 0, 0},
	{1, 0, 1, 0, 1} };
		bool visited[N][N];
    memset(visited,false,sizeof(visited));
	int i,j,count=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(mat[i][j]==1 && !visited[i][j]){
		         dfs(mat,i,j,visited);
				 count++;
			          }
		}
	}
cout<<count<<endl;

}

