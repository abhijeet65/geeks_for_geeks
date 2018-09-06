#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool comp(int a, int b)
{
    return (a < b);
}
bool comp1(int a, int b)
{
    return (a > b);
}
 
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n,ans;
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		int left=*max_element(a,a+i,comp1);
		int k=i+2;
		int right=*min_element(a+k,a+n,comp);
		if(a[i+1]>left && a[i+1]<right){
			ans=a[i+1];
			break;
		}
	}
	cout<<ans<<endl;
	}
}
	