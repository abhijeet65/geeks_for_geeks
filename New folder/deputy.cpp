#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=1;
		cin>>n;
		int a[n],b[n];
		
		for(int i=1;i<=n;i++)
		cin>>a[i];
		for(int i=1;i<=n;i++)
		cin>>b[i];
	
	int arr[n];
	for(int k=1;k<=n;k++)
		arr[k]=1;
	
	
	for(int i=1;i<=n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	int count=0,u,v;
		for(int i=1;count!=20;)
		{
			if(arr[i]==1){
				int j=i;
				j--;
			while(arr[j]!=1 && j!=i)
			{
				j=(j-1);
				if(j==-1)
					j=n;
			}
			if(j==i)
				flag=0;
			u=j;
			j=i;
			j++;
			while(arr[j]!=1 && j!=i)
			{
				j=(j+1)%n;
			}
			if(j==i)
				flag=0;
			v=j;
			
			
			count++; 
				if(b[i] <= a[u]+a[v] )
					arr[i]=0;
					
			
			}
			i++;
			if(i==n+1)
				i=1;
		}
		for(int i=1;i<=n;i++)
			if(arr[i]==1)
				cout<<b[i];
		
		cout<<endl;
	}
}
	