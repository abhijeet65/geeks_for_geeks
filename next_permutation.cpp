#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	while(next_permutation(a,a+n))
	{
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		
	}
	cout<<"End of prgram\n";
	
}
	