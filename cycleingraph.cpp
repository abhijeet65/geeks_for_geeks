/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
The structure of the class is as follows 
which contains an integer V denoting the no 
of vertices and a list of adjacency vertices.
class Graph
{
    int V;
    list<int> *adj;
public :
    Graph(int V);
    void addEdge(int v,int w);
    bool isCyclic();
};
*/
/*You are required to complete this method*/
bool Graph :: isCyclic()
{
//Your code here
int visited[101];
memset(visited,false,sizeof(visited));
stack<int>s;
int st[101];
memset(st,false,sizeof(st));
int k;
for(k=0;k<V;k++)
{
    
   if(!visited[k])
    {
        s.push(k);
        st[k]=true;
        visited[k]=true;
        list<int>::iterator i;
        while(!s.empty())
        {
            int p=s.top();
            s.pop();
            for(i=adj[p].begin();i!=adj[p].end();i++)
            {
                
                 if(!visited[*i])
                {
                    s.push(*i);
                    visited[*i]=true;
                    st[*i]=true;
                }
                else if(visited[*i]&&st[*i])
                    return true;
            }
            st[p]=false;
        }
    }
}
return false;
}