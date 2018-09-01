#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    int k,n,i;
	    cin>>k>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    int c=0;
	    int count=n/2-1;
	    for(i=0;i<n;i++)
	    {
	        if(i<=count)
	        a[i]=a[i]+k;
	        else
	        a[i]=a[i]-k;
	    }
	    cout<<(a[n-1]-a[0])<<endl;
	}
	
	return 0;
}