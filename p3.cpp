#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void printarray(int a[],int n)
{
	int i;
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n";
}


void heapermutation(int a[],int size,int n)
{
if(size==1)
{
printarray(a,n);
return;
}
int i;
for(i=0;i<size;i++)
{
heapermutation(a,size-1,n);

if(size%2==1)
swap(a[0],a[size-1]);
else
swap(a[i],a[size-1]);
}
}


int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n],i;

for(i=0;i<n;i++)
cin>>a[i];

heapermutation(a,n,n);
}
}
