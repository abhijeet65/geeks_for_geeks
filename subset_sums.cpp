#include<bits/stdc++.h>
using namespace std;

void subsetSums(int a[],int l,int r,int sum)
{
	if(l>r)
	{
		cout<<sum<<" ";
		return;
	}
	subsetSums(a,l+1,r,sum+a[l]);
	subsetSums(a,l+1,r,sum);
}
	
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	subsetSums(a,0,n-1,0);
}
