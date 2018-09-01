#include<bits/stdc++.h>
#include<set>
using namespace std;
int comp(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}


int main()
{
int t;
cin>>t;
while(t--)
{
int n,i;
cin>>n;
set<int> s;
list<int> v;
for(i=0;i<=n;i++){
s.insert(i*i);
v.push_back(2*i);
}
sort(v.begin(),v.end(),comp);
list<int>::iterator p;
for(p=v.begin();p!=v.end();p++)
	cout<<*p<<" ";
set<int>::iterator it;

for(it=s.end();it!=s.begin();it--)
	cout<<*it<<" ";
cout<<endl;

}
}

