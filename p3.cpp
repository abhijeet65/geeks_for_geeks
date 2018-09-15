#include<bits/stdc++.h>
#include<algorithm>
#include<sstream>
#include<string>
#include<boost/lexical_cast>
using namespace std;

void printarray(int a[],int n)
{
	string s="";
	int i;
	
for(i=0;i<n;i++){
	ostringstream str1;
	str1<<a[i];
	string s1=str1.str();
s=s+s1;
}
int i_val = boost::lexical_cast<int>(s); 
cout<<i_val;
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
