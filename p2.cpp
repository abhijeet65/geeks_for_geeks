#include<bits/stdc++.h>
using namespace std;

int makeanswer(int n)
{

int m=n;
int sum=0;
sum=sum+n;
while(n>0)
{
	int r=n%10;
	sum=sum+r;
	n/=10;

}
return sum;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int ans=makeanswer(n);
	cout<<ans<<"\n";
	}
}

