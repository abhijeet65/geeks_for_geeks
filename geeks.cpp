#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,j,k;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    int b[n];
	    
	    for(i=0;i<n;i++)
	    {
	        j=i-1;
	        k=1;
	        while(j>=0)
	        {
	            
				if(a[j]<=a[i])
	            k++;
			else
				break;
				j--;
	        }
			
			cout<<k<<endl;
	     b[i]=k;   
	        
	    }
	    for(i=0;i<n;i++)
	    cout<<b[i]<<" ";
	    
	}
	
	return 0;
}