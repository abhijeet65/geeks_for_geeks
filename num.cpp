#include<bits/stdc++.h>
using namespace std;

int check(int k)
{
	double a=sqrt(k);
	if(a-floor(a)==0)
		return 1;
	else 
		return 0;
}




int main()
{
	int n;
	cin>>n;
	
	int a[n],b[n];
	int prevsqr,pos,nextnum,nextsqr;
	for(int j=1;j<=100;j++)
		{
			pos=1;
			if(check(j)){
			a[0]=j;
			b[0]=j;
	while(pos < n){
		    prevsqr=b[pos-1];
			nextnum=sqrt(prevsqr);
			nextnum++;
			nextsqr=nextnum*nextnum;
	for(int i=1;i<=100;i++)
	{
		if(check(i+a[pos-1])){
		if(a[pos-1]+i==nextsqr){
			a[pos]=i;
			b[pos]=nextsqr;
			pos++;
			break;
		}
		}
	}
	}
	if(pos==n-1)
		break;

			}
		}
		for(int k=0;k<n;k++)
			cout<<a[k]<<" ";
		cout<<endl;
		
		
}
	
		
			
		
		
		
		
		