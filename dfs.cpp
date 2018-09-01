#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int visited[10],n,a[10][10];
void dfs(int x)
{
	int i;
	visited[x]=1;
	char ans;
	ans=x+64;
	cout<<ans<<" ";
	for(i=1;i<=n;i++)
	{
		if(visited[i]==0 && a[x][i]==1)
			dfs(i);
	}
}


int main()
{
	
	int i,j;
	cout<<"ENtre the Number of vertices\n";
	cin>>n;
	
	cout<<"Enter the adjacency matrrix";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	}
	
	for(i=1;i<=n;i++)
		visited[i]=0;
	
	int source;
	cout<<"DFs traversal is\n";
	cout<<"Enter the source vertex\n";
	cin>>source;
	dfs(source);
	
}


	