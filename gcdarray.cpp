#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
	{
		if(y==0)
			return x;
		else
			return(gcd(y,x%y));
	}
    

int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n],i;
for(i=0;i<n;i++)
cin>>a[i];
int result = a[0];
    for(int i=1; i<n; i++) {
        result = gcd(result, a[i]);
    }
	cout<<result<<endl;
    if(result==1)
    cout << result-1 << endl;
    else
    cout<<"-1"<<endl;
    }
    }
	
	