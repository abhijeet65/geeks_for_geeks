#include<bits/stdc++.h>
using namespace std;
int solve(int A)
{
	int a[A],i,j;
    for(i=2;i<=A;i++)
    {
    a[i]=i;
    }
    for(i=2;i<sqrt(A);i++)
    {
        if(a[i]>0){
        j=2*i;
        while(j<=A)
        {
            if(a[j]>0)
            a[j]=0;
            j=j+i;
        }
    }
    }
    for(i=2;i<=A;i++)
    {
        if(a[i]!=0)
        cout<<a[i]<<" ";
    }
}

int main()
{
	int n;
	cin>>n;
	solve(n);
}

