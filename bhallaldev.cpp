#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	int q;
	cin>>q;
	while(q--)
	{
		cout<<" ---\n";
		int k;
		cin>>k;
		sort(a,a+n);
		for(i=0;i<n;i++)
		cout<<a[i];
		int sum=0;
		for(i=0;i<n;)
		{
			sum=sum+a[i];
			i=i+k+1;
			
		}
		cout<<sum<<endl;
	}
	
	return 0;	
	}
		
	