#include<bits/stdc++.h>
using namespace std;

int main()
{
	
		
			long int n,i,d;
			cin>>n>>d;
			
			long long int a[n];
			for(i=1;i<=n;i++)
			cin>>a[i];
		sort(a,a+n);
		int count=0;
		
		for(i=1;i<n;i++)
		{
			if(a[i+1]-a[i]<=d){
				count++;i=i+2;
			}
			else
				i++;
		}
		cout<<count;
		
	return 0;
}
		