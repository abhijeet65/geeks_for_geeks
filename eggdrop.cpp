#include<bits/stdc++.h>
using namespace std;


int eggdrop(int n,int k)
{
	if(k==1 || k==0)
		return 0;
	if(n==1)
		return k;
	
	int res=0,min=INT_MAX;
	int x;
	for(x=1;x<=k;x++)
	{
		res=max(eggdrop(n-1,x-1),eggdrop(n,k-x));
		if(res<min)
		{
			min=res;
		}
	}
	return(min+1);
}

int main()
{
	
	int n,k;
	cin>>n>>k;
	//n is the number of eggs and k is the number of floors
	
	int ans=eggdrop(n,k);
	cout<<ans<<endl;
	return 0;	
}

