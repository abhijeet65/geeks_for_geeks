
#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


static int res=0;


void checkcube(int a[],int b[],int n)
{
    int sum=0,c=0;
    for(int i=0;i<=n;i++)
    {
        if(b[i]==1)
        {
            sum=sum+a[i];
			c++;
			//cout<<a[i]<<" ";
        }
    }
	//cout<<endl;
    float ans=cbrt(sum);
	if(ans-floor(ans)==0 && c==3)
    {
		//cout<<sum<<endl;
		res++;
	}
return;
}

void combinations(int a[],int b[],int k,int n)
{
    if(k==n)
    {
        b[k]=0;
        checkcube(a,b,n);
        b[k]=1;
        checkcube(a,b,n);
        return;
        
    }
    b[k]=0;
    combinations(a,b,k+1,n);
    b[k]=1;
    combinations(a,b,k+1,n);
    return;
}



int main()
{
    int n;
    cin>>n;
    
    int i;
    int a[n];
    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;
        int sum=1;
        for(int j=1;j<=k;j++)
        {
			int x;
            cin>>x;
            sum=sum*x;
        }
        a[i]=sum;
    }
    int b[n];
	for(int i=0;i<n;i++)
		b[i]=0;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
	
    combinations(a,b,0,n-1);
    cout<<res;
}

