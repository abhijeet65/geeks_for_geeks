#include <iostream>
using namespace std;
int a[100][100];

int paths(int n,int m)
{
    if(n==1 || m==1)
    return 1;
 
    return(paths(n-1,m)+paths(n,m-1));
}
  
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	int n,m,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
	a[i][j]=0;
	int ans=paths(n,m);
	cout<<ans<<endl;
	}
	return 0;
}
  