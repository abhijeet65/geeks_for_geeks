#include<bits/stdc++.h>
using namespace std;

int reverse(int c){
int rev=0,r;
while(c>0){
r=c%10;
rev=(rev*10)+r;
c=c/10;
}
return rev;
}




int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int x=reverse(n);
cout<<x<<endl;
if(x==n)
{
cout<<"1"<<"1"<<endl;
}
else
cout<<"0"<<"1"<<endl;
}
return 0;
}

