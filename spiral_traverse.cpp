#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cin>>a[i][j];
	}
	int l=0,p=n-1,q=0,r=m-1;
	
while(l<=p && q<=r)
{
	for(i=p;i>=l;i--)
		cout<<a[i][q]<<" ";
	q++;
	for(i=q;i<=r;i++)
	{
		cout<<a[l][i]<<" ";
	}
	l++;
	for(i=l;i<=p;i++)
		cout<<a[i][r]<<" ";
	r--;
	for(i=r;i>=q;i--)
		cout<<a[p][i]<<" ";
	p--;
		
}
}
		
		
	