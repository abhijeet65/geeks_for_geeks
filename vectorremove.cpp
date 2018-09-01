#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


int main()
{
int t;
cin>>t;
while(t--)
{
int n,i,x,j;
cin>>n;
vector<int> v;
vector<int> graph[n];
vector<int>::iterator it;
for(i=1;i<=n;i++)
{
	for(j=1;j<=3;j++){
		cin>>x;
	graph[i].push_back(x);
	}
}
for(i=1;i<=n;i++)
{
	
	for(it=graph[i].begin();it!=graph[i].end();it++)
		cout<<*it<<" ";
	cout<<endl;
}



for(i=1;i<=n;i++){
cin>>x;
v.push_back(x);
}
for(it=v.begin();it!=v.end();it++)
cout<<*it;
it=find(v.begin(),v.end(),8);
if(it!=v.end())
	v.erase(it);
for(it=v.begin();it!=v.end();it++)
cout<<*it;
}
}

