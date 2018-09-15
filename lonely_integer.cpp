#include<bits/stdc++.h>

using namespace std;
int lonelyinteger(int a[],int n)
{
	int i,res=0;
	for(i=0;i<n;i++)
	{
		res^=a[i];
		
	}
	return res;
}


int main()
{
	int a[]={9,1,2,3,2,9,1,7,7};
	int size=sizeof(a)/sizeof(a[0]);
	int ans=lonelyinteger(a,size);
	cout<<ans<<endl;
}


