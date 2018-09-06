#include<bits/stdc++.h>
using namespace std;
int n,m;
map<int,vector<pair<int,int>>>g;
#define inf 1000000000000000000
long long dis[100010];
queue<int>qu;
///w should be all same so that bfs could work
int main()
{
	cin>>n>>m;  //n is the number of vertices and m is the number of edges
	int u,v,w;  // u---->v with a weight of w
	while(m--)  
	{
		cin>>u>>v>>w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	qu.push(1);
	for(int i=1;i<=n;i++)
	{
		dis[i] = inf;
	}
	dis[1] = 0;  //making the distance of node1 from source as 0
	while(!qu.empty())
	{
		u = qu.front();
		qu.pop();
		for(int i=0;i<g[u].size();i++) //checking all adjacent nodes and relax them
		{
			v = g[u][i].first;
			w = g[u][i].second;
			if(dis[u] + w < dis[v]) // relaxing the edges
			{
				dis[v] = dis[u] + w;
				qu.push(v);   // push the result into queue after relaxing
			}
		 } 
	}
	return 0;
}