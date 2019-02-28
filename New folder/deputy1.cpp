#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int a[n+2];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	a[0]=a[n];
	a[n+1]=a[1];
	int d[n];
	for(int i=1;i<=n;i++)
	cin>>d[i];
	
	int ans=-1;
	
	for(int i=1;i<=n;i++)
	{
	if(a[i-1]+a[i+1] < d[i])
	ans=max(ans,d[i]);
		}
		cout<<ans<<endl;
	}
	
	
	
	
	
	return 0;
}
