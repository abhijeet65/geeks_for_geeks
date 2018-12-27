#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n];
        for(i=1;i<=n;i++)
        {
        cin>>a[i];
        }
        int k=0,sum=0;
        int flag=0;
       for(i=1;i<=n;i++)
       {
           k=0;
           for(j=i+1;j<=n;j++)
           {
               if(a[i] > a[j])
                   k++;
           }
           if(k>2)
           {
               flag=1;
               break;
           }
           else
               sum=sum+k;
       }
        if(flag==0)
        cout<<sum<<endl;
        else
            cout<<"Too chaotic"<<endl;
    }
}