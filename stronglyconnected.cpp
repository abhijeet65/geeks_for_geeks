/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The function takes an adjacency list representation of the graph g
    and two integers N and M as specified in the problem statement
    You are required to complete this method. */
void dfsutilstack(int u,vector<int>g[MAX],bool vis[],stack<int>&s)
{
 vis[u]=true;
 for(int i=0;i<g[u].size();i++)
 {
     if(!vis[g[u][i]])
     dfsutilstack(g[u][i],g,vis,s);
 }
 s.push(u);
}
void dfsutil(int u,vector<int>g[MAX],bool vis[])
{
 vis[u]=true;
 for(int i=0;i<g[u].size();i++)
 {
     if(!vis[g[u][i]])
     dfsutil(g[u][i],g,vis);
 }
}
int kosaraju(vector<int> g[MAX], int N, int M)
{
  stack<int>s;    
 bool vis[MAX]={false};
for(int i=1;i<=N;i++)
{ 
 if(!vis[i])
 dfsutilstack(i,g,vis,s);
}
  vector<int> g2[MAX];
  for(int i=1;i<N+1;i++)
  {
   for(int j=0;j<g[i].size();j++)
   {
       g2[g[i][j]].push_back(i);
   }
  }
  for(int i=0;i<MAX;i++)
  vis[i]=false;
  int count=0;
  while(!s.empty())
  {
      int x=s.top();
      s.pop();
      if(!vis[x])
      {dfsutil(x,g2,vis);
      count++;
     // cout<<x<<"haha"<<endl;
      }
  }
  return count;
}