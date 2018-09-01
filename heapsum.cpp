#include <bits/stdc++.h>

using namespace std;

void heapermut(int a[],int size,int n,int k)
{
    int i;
    if(size==1)
    {
         int initialsum=0;   
        int sum=accumulate(a,a+n,initialsum);
        if(sum==k)
        cout<<"(";
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<")"<<endl;
        
    }
    for(i=0;i<size;i++)
    {
     heapermut(a,size-1,n,k);
     
     if(size%2==1)
     swap(a[i],a[size]);
     else
     swap(a[0],a[size]);
    }
}


int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    int k;
	    cin>>k;
	    heapermut(a,n,n,k);
	}
	
	return 0;
}