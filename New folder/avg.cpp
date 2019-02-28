#include<bits/stdc++.h>

using namespace std;

//febrauray cook-off 

@author : Abhijeet Saraf

int main()
{
int t;
cin>>t;
while(t--)
{
int n,k,v;

cin>>n>>k>>v;
vector<int> a; 
for(int i=0;i<n;i++)
{
int l;
cin>>l;
a.push_back(l);
}

int p=v*(n+k);
float z=p-(accumulate(a.begin(),a.end(),0));

float res=z/k;
if(res < 0){
	cout<<"-1"<<endl;
	continue;
}
if(res-floor(res)==0)
{
cout<<res<<endl;
} 
else
cout<<"-1"<<endl;
}
}