#include<bits/stdc++.h>
#include<algorithm>


using namespace std;


bool isSafe(int N,int x,int y,int *mat,bool *visited)
{
	if(x>=0 && x<N && y>=0 && y<N && mat[x][y] && !visited[x][y])
		return true;
	return false;
}


void dfs(int N,int i,int j,int *mat,bool *visited)
{
	
	visited[i][j]=true;
	
	int row[]={-1,-1,-1,0,0,1,1,1};
	int col[]={-1,0,1,-1,1,-1,0,1};
	int k;
	
	for(k=0;k<8;k++)
	{
		if(isSafe(N,row[k]+i,col[k]+j,mat,visited)==true)
		{
			dfs(N,row[k]+i,col[k]+j,&mat,&visited);
		}
		
	}
	
	
	
}

int main()
{
	int N;
	N=5;
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
		         dfs(N,i,j,&mat,&visited);
				 count++;
			          }
		}
	}
cout<<count<<endl;

}

