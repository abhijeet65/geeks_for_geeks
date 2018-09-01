#include<bits/stdc++.h>

using namespace std;
int l;
int func(int n)
{
 int rev=0;
 l=0;
while(n>0)
{
	int r=n%2;
	rev=(rev*10)+r;
	n=n/2;
	l++;
}
return rev;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int rev=func(n);
		for(i=1;i<=l;i++)
		{
			
		}
		cout<<rev<<endl;
	}
}


	