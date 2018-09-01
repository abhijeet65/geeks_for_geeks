#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n],i,x;
for(i=0;i<n;i++)
cin>>a[i];
int initial=0;
int sum=accumulate(a,a+n,initial);
sum=sum/(n-1);
vector<int> v;
for(i=0;i<n;i++)
{
x=sum-a[i];
v.push_back(x);
}

vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++)
cout<<*it<<" ";
cout<<endl;
}
}






