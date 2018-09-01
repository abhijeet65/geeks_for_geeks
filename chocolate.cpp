#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int gcd(int m,int n)
{
	if(n==0)
		return m;
	else
		return(gcd(n,m%n));
}


int main()
{
ll t;
cin>>t;
while(t--)
{
ll x,y;
cin>>x>>y;
/*
while(x!=y || (x==0 || y==0))
{
if(x<y)
{
y=y-x;
}
else
{
x=x-y;
}
}
cout<<x+y<<endl;
}*/
int ans;
int res=gcd(x,y);
	ans=res*2;
cout<<ans<<endl;


}
}

