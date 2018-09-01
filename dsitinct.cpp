#include<bits/stdc++.h>

using namespace std;

void odd(int n)
{
	vector<int> v;
	vector<int>::iterator it;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0 && n%2==1)
			v.push_back(i);
	}
	for(it=v.begin();it!=v.end();it++)
		cout<<*it<<" ";
	cout<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		
		for(i=l;i<=r;i++)
		{
			odd(i);
		}
	}
}



	

		