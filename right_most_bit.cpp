#include<bits/stdc++.h>

using namespace std;


int solve(int n)
{
	int m=1,pos=1;
	while(!(n & m))
	{
		m=m<<1;
		pos++;
	}
	return pos;
	
	
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		int ans=solve(x);
		cout<<ans<<endl;
	}
}
