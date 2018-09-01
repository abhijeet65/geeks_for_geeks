#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

 
int main()
{
int n,q;
cin>>n;
int rowsum[n];
int colsum[n];
int i;
for(i=0;i<n;i++)
	rowsum[i]=i*5;

for(i=0;i<n;i++)
	cout<<rowsum[i]<<" ";
int initial=0;
int maxsum=*max_element(rowsum,rowsum+n);
cout<<maxsum<<endl;


}





