#include <bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 
void dfs(vector<int> adj[],int x,int visited[],int count)
{
  int i;
  visited[x]=true;
  for(i=1;i<=adj[x].size();i++)
  {
    if(!visited[i] && adj[x][i])
    {
      count++;
      dfs(adj,i,visited,count);
    }
  }
  
  
}
void solve(vector<int> adj[],int x,int visited[],int n)
{
 int i; 
  for(i=1;i<=n;i++)
  {
    int count=1;
    if(!visited[i])
      dfs(adj,i,visited,count);
    cout<<count<<endl;
  }
  return;
  
}



int main() {
	int n, m;
	cin >> n >> m;
  vector<int> adj[n];
  int i;
  int visited[n];
   for(i=1;i<=n;i++)
	   visited[i]=0;
  for(i=1;i<=m;i++)
  {
    int u,v;
    cin>>u>>v;
   addEdge(adj,u,v);
  }    
  
  solve(adj,1,visited,n);
	
    

}