#include<iostream>
#include<cstdlib>
#include<list>

using namespace std;
class GraphDfs
{
    private:
        int v;
        list<int> *adj;
        int *label;
        int DFS(int v,int size_connected)
        {
			
            size_connected++;
            cout<<(v+1)<<"   ";
            label[v]=1;
            list<int>::iterator i;
			for(i=adj[v].begin();i!=adj[v].end();++i)
            {
                if(label[*i]==0)
                {
                    size_connected=DFS(*i,size_connected);

                }

            }
            return size_connected;
        }
    public:
        GraphDfs(int k)
        {
            v=k;
            adj=new list<int>[v];
            label=new int[v];
            for(int i=0;i<v;i++)
            {
                label[i]=0;
            }
        }
        void DFS()
        {
            int flag=0;
            int size_connected=0;
            int max=0;
            for(int i=0;i<v;i++)
            {   
                size_connected=0;
                if(label[i]==0)
                {
                    size_connected=DFS(i,size_connected);
                    max=size_connected>max?size_connected:max;
                    cout<<size_connected<<endl;
                    flag++;
                }
            }
            cout<<endl<<"The number of connected compnenets are "<<flag<<endl;
            cout<<endl<<"The size of largest connected component is "<<max<<endl;
            //cout<<cycle;
        }

        void insert()
        {
            int u=0;int a=0;int flag=1;
            while(flag==1)
            {   cout<<"Enter the edges in (u,v) form"<<endl;

                cin>>u>>a;
                adj[a-1].push_back(u-1);
                adj[u-1].push_back(a-1);
                cout<<"Do you want to enter more??1/0 "<<endl;
                cin>>flag;

            }
        }       
};
int main()
{
    cout<<"Enter the number of vertices"<<endl;
    int v=0;
    cin>>v;
    GraphDfs g(v);
    g.insert();
    g.DFS();
    system("Pause");     
}