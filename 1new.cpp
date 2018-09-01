#include<bits/stdc++.h>

using namespace std;
long long count_color[2];

void addedge(vector<int> adj[],int s,int d)
{
	adj[s].push_back(d);
	adj[d].push_back(s);
	
}



void dfs(vector<int> adj[],int node,int parent,int color)
{
count_color[color]++;
int i;
for(i=0;i<adj[node].size();i++)
{
if(adj[node][i]!=parent)
{
	dfs(adj,adj[node][i],node,!color);
}		
}
}



int findsol(vector<int> adj[],int n)
{
	dfs(adj,1,0,0);
	return((count_color[0]*count_color[1])-(n-1));
}



int main()
{
	int n,colors;
	cout<<"Enter the number of vertices\n";
	cin>>n;
	vector<int> adj[n];
	while(1){
   cout<<"Enter the choice\n1:insert edge\n2:display_list\n3:findmothervertex\n";
   int ch,s,d,w=0;
   cin>>ch;
   switch(ch){
	   case 1:cout<<"Enter the source and destination along with weight\n";cin>>s>>d;
	   addedge(adj,s,d);break;
	   case 2:colors=findsol(adj,n);
	   cout<<colors<<endl;
	   cout<<count_color[0]<<" "<<count_color[1]<<endl;break;
	   default:"enter the valid choice\n";
	}
}
}

