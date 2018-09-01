#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,i,j;
	    cin>>n>>k;
	    int a[n],flag=0;
	    for(i=1;i<=n;i++)
	    {
	        cin>>a[i];
	        
	    }
	    int sum=0;
	    for(i=1;i<=n;)
	    {
	        sum=0;
	        for(j=i;j<=n;j++)
	        {
	            if(sum<k)
	           sum=sum+a[j];
	           else if(sum==k)
	            {
	                cout<<i<<" "<<j-1;
	                cout<<endl;
	                flag=1;
	                break;
	            }
	            else
	             ++i;
	            
	        }
	        if(flag==1)
	        break;
	    }
	}
	
	
	return 0;
}