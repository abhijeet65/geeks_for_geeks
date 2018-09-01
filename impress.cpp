#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> v;
		
		int x,i;
		
		for(i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		int max_sum=0,j,sum=0;
		for(i=0;i<n-k+1;i++)
		{
			sum=0;
			for(j=i;j<i+k;j++)
			{
				sum=sum+v[j];
	            if(sum>max_sum)	
					max_sum=sum;
			}
	
	}
	cout<<max_sum<<endl;
	
	}
	
	return 0;
}

		
		
		
		
		