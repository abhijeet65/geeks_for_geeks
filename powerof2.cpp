#include<bits/stdc++.h>

using namespace std;
int powerof2(int x)
		{
			if(x&(x-1))
				return 0;
			else
				return 1;
			
		}
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	int i,j,sum=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		
	
	}
	int count=0;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			sum=a[i]+a[j];
			if(powerof2(sum))
				count++;
		}
	}
	cout<<count<<endl;
}
		
		