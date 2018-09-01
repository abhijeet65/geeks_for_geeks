#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n;
	    int a[n],i;
	    for(i=1;i<n;i++)
	    {
	        cin>>a[i];
	        
	    }
	    int flag=0;
	    for(i=1;i<n;i++)
	    {
	        if(a[i]!=i)
	        {
	            cout<<i;
	           flag==1;
	            break;
	        }
	    }
	    if(i==n && flag==0)
	    cout<<i;
	    
	    
	   
	    
	}
	
	return 0;
}