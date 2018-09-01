#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int n;
cin>>n;
int i;
map<int,int> hmap;
map<int,int>::iterator it;
for(i=0;i<=n;i++)
{
hmap.insert(pair<int,int>(i,i*i));
}
for(it=hmap.begin();it!=hmap.end();it++)
{
	cout<<it->first<<" "<<it->second<<endl;
	
}
//for(auto k:hmap)
//{
//cout<<k->first<<" "<<k->second<<endl;	
//}
}
return 0;
}
