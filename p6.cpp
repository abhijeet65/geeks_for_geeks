#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
int t;
cin>>t;
while(t--)
{
    int n,i,j;
    cin>>n;
    int a[n],b[n];
    for(i=1;i<=n;i++){
    cin>>a[i];
	b[i]=a[i];
	}
    
    for(j=1;j<=n;j++)
    {
        for(i=1;i<j;i++)
        {
            
                if(a[i]<a[j])
                {
                    b[j]=b[i]+a[j];
                }
            
        }
    }
	int max=-1;
    for(i=1;i<=n;i++)
	{
		if(b[i]>max)
			max=b[i];
	}
    cout<<max<<endl;
    
}
	return 0;
}