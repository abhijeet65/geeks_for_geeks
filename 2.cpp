#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,k;
		cin>>n>>a>>b>>k;
		int A=0,B=0;
		for(int i=1;i<=n;i++)
		{
			if(i % a==0 && i % b==0)
				continue;
			else if(i % a==0 && i % b !=0)
				A++;
			else if( i % b==0 && i % a !=0)
				B++;
		}
		if((A+B)>=k)
			cout<<"Win"<<endl;
		else
			cout<<"Lose"<<endl;
			
	}
}
	