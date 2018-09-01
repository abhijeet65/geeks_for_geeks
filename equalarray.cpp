#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,i,j;
	    cin>>n>>m;
	    int a[n],b[m];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(j=0;j<m;j++)
	    cin>>b[j];
	    int flag=0,k;
	    sort(a,a+n);
	    sort(b,b+m);
	    for(i=0;i<n-m;i++)
	    {
	        k=0;
	        for(j=i;j<m;j++)
	        {
	            if(b[j]==a[i+k])
	            k++;
	            
	        }
	        if(k==m-1){
	        cout<<"Yes";
	        flag=1;
	        }
	        
	    }
	    if(flag==0)
	    cout<<"no";
	    
	}
	return 0;
}