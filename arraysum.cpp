#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int n,i;
cin>>n;
int a[n],initialsum=0;
for(i=0;i<n;i++)
	cin>>a[i];

int sum=accumulate(a,a+n,initialsum);
cout<<sum<<endl;
}
}

