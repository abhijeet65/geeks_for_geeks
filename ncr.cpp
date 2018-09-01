#include<bits/stdc++.h>
using namespace std;


int ncr(int n,int r)
{
int i,res=1;
for(i=1;i<=r;i++)
{
res=res*(n-i+1);
res=res/i;
}
return res;
}


int main()
{
int n,r;
cin>>n>>r;

int k=ncr(n,r);
cout<<k;
}


