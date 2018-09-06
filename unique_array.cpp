#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	//cin>>n;
	int i,n;
    int a[]={12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7,5,13,16,16,17,19,19,20};
	int b[100]={0};
	
	n=sizeof(a)/sizeof(int);
	for(i=0;i<n;i++)
	{
		b[a[i]]++;
	}
	
	for(i=0;i<100;i++)
	{
		if(b[i]==1)
			cout<<i<<" ";
	}

	
	//cout<<n<<endl;
}


