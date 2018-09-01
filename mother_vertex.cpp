#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

void addedge(vector<int> adj[],int s,int d,int w)
{
	adj[s].push_back(d);
	adj[d].push_back(s);
}

void display_list(vector<int> adj[],int V)
{
	vector<int>::iterator it;
	for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
       for(it=adj[v].begin();it!=adj[v].end();it++)
           cout << "-> " << *it;
        printf("\n");
    }
}
void dfs(vector<int> adj[],bool visited[],int x )
{
	visited[x]=true;
	vector<int>::iterator it;
    it=adj[x].begin();
	int next=*it;
	if(visited[next]==0)
	dfs(adj,visited,next);
}
	

void findmothervertex(vector<int> adj[],int n)
{
	
	int i,j;
	bool visited[n];
	
	for(i=0;i<n;i++)
	{
		memset(visited,false,sizeof(visited));
		if(!visited[i])
		{
			int count=1;
			dfs(adj,visited,i);
			for(int k=0;k<n;k++)
			{
				if(visited[k]==1)
					count++;
			}
			if(count==n)
				cout<<"mother vetrex is"<<i<<endl;
		}
	
	}
	
}




int main()
{
	int n;
	cout<<"Enter the number of vertices\n";
	cin>>n;
	vector<int> adj[n];
	while(1){
   cout<<"Enter the choice\n1:insert edge\n2:display_list\n3:findmothervertex\n";
   int ch,s,d,w=0;
   cin>>ch;
   switch(ch){
	   case 1:cout<<"Enter the source and destination along with weight\n";cin>>s>>d;
	   addedge(adj,s,d,w);break;
	   case 2:display_list(adj,n);break;
	   case 3:findmothervertex(adj,n);break;
	   default:exit(0);
   }
	}
}

	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	




