#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int flag=0;

void printarray(int a[],int n,int b[],int sum)
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
	sort(v.begin(),v.end());
	int res=accumulate(v.begin(),v.end(),initialsum);
	if(res==sum)
	{
		flag=1;
		cout<<"(";
		for(it=v.begin();it!=v.end()-1;it++)
			cout<<*it<<" ";
		cout<<*it;
		cout<<")";
		
	}
	
	v.clear();
	
}

void permut(int a[],int n,int k,int b[],int sum)
{
	if(k==n)
	{
		b[k]=0;
		printarray(a,n,b,sum);
		b[k]=1;
		printarray(a,n,b,sum);
		return;
	}
	b[k]=0;
	permut(a,n,k+1,b,sum);
	b[k]=1;
	permut(a,n,k+1,b,sum);
		
}



int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
		flag=0;
	    int n,i;
	    cin>>n;
	    int a[n],b[n];
	    for(i=0;i<n;i++){
	    cin>>a[i];
		b[i]=0;
		}
		int sum;
		cin>>sum;
	    permut(a,n-1,0,b,sum);
		if(flag==0)
			cout<<"Empty\n";
	}
	
	return 0;
}