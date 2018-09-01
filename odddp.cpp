#include<bits/stdc++.h>

using namespace std;
vector<long long int> v;
long long int res=0;
	

void odd(int n)
{
	long long int i;
	v.clear();
	//vector<int>::iterator it;
	for(i=1;i<=n;i++)
	{
		if(n%i==0 && i%2==1)
			v.push_back(i);
	}
	//for(it=v.begin();it!=v.end();it++)
		//cout<<*it<<" ";
	int initialsum=0;
	long long int sum=accumulate(v.begin(),v.end(),initialsum);
	res=res+sum;
}

int main()
{
	long long int t,i;
	cin>>t;
	while(t--)
	{
		res=0;
	 long long int l,r;
		cin>>l>>r;
		
		for(i=l;i<=r;i++)
		{
			odd(i);
		}
		cout<<res<<endl;
	}
}



	

		