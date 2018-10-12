#include<bits/stdc++.h>
#include<vector>

using namespace std;

bool comp(pair<int,int> &x,pair<int,int> &y)
{
	return(x.second<y.second);
	
	
}


int main()
{
	
	int n,q,i,j;
	cin>>n>>q;
	int t[n],p[n];
	for(i=0;i<n;i++)
		cin>>t[i];
	for(j=0;j<n;j++)
		cin>>p[j];
	int x,y;
	//for(i=0;i<n;i++)
		//cout<<p[i];
	vector< pair <int,int> > v;
	for(i=0;i<n;i++)
	{
		v.push_back( make_pair(t[i],p[i]) );
	}
	sort(v.begin(),v.end(),comp);
	for(i=0;i<n;i++)
	{
		cout<<v[i].first<<" ";
	}
	for(i=0;i<n;i++)
		cout<<v[i].second<<" ";
	
	while(q--)
	{
		cin>>x>>y;
		if(x==1)
		{
			for(i=0;i<n;i++)
			{
				if(v[i].second>=y){
					cout<<v[i].first<<endl;
					break;
				}
				
			}
			if(i==n-1)
				cout<<"-1"<<endl;
		}
		else
		{
			int max=-1;
			for(i=0;i<n;i++)
			{
				if(v[i].first>=y && max<=v[i].second)
					max=v[i].second;
			}
			cout<<max<<endl;
			
		}
	}
}

	
	    	
		