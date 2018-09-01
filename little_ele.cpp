#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		int inv=0,loc_inv=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
			if(a[i]>a[j])
				inv++;
			}
			if(a[i]>a[i+1])
				loc_inv++;
			
		}
		if(loc_inv==inv)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
