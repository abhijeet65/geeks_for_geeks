#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int isprime(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
	{
	if(x%i==0)
    return 0; 		
	}
	return 1;
}
void printarray(int a[],int n,int b[],int *count)
{
	int i;
	//cout<<"(";
	vector<int> v;
	vector<int>::iterator it;
	int initialsum=0;
	for(i=0;i<=n;i++)
	{
		if(b[i]==1)
			v.push_back(a[i]);
	}
	
	int res=accumulate(v.begin(),v.end(),initialsum);
	if(isprime(res))
	{
		(*count)++;
		
	}
	
	v.clear();
	
}

void permut(int a[],int n,int k,int b[],int *count)
{
	if(k==n)
	{
		b[k]=0;
		printarray(a,n,b,count);
		b[k]=1;
		printarray(a,n,b,count);
		return;
	}
	b[k]=0;
	permut(a,n,k+1,b,count);
	b[k]=1;
	permut(a,n,k+1,b,count);
		
}



int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	
	    int n,i;
	    cin>>n;
	    int a[n],b[n];
	    for(i=0;i<n;i++){
	    cin>>a[i];
		b[i]=0;
		}
		int count=0;
	    permut(a,n-1,0,b,&count);
		cout<<count<<endl;
	}

	return 0;
}