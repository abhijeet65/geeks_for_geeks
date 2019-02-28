#include<bits/stdc++.h>
using namespace std;

int gcd(int m,int n)
{
    if(n==0)
    return m;
    else if(n > m)
    return gcd(n,m);
    return gcd(n,m%n);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,k,i;
		cin>>n>>a>>b>>k;
int A=0,B=0;
		for(i=a;i<=n;i+=a)
		if(i % a ==0)
		A++;

		for(i=b;i<=n;i+=b)
		if(i % b==0)
		B++;

int p=gcd(a,b);
p=(a*b)/p;
//cout<<p<<endl;
int z=0;
for(i=p;i<=n;i+=p)
z++;
//cout<<z<<endl;
		if((A+B-z)>=k)
		cout<<"Win"<<endl;
		else
		cout<<"Lose"<<endl;

	}
}
