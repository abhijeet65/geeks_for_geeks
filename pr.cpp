#include<bits/stdc++.h>
using namespace std;


int power(int n,int p)
{
if(p==0)
return 1;
else
{
int temp=power(n,p/2);
if(p%2==0)
return(temp*temp);
else
return(n*temp*temp);
}
}



int main()
{
int n,p;
cin>>n>>p;
int ans=power(n,p);
cout<<ans;

}

