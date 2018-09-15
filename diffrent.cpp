#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
 {
	//code
	
	int t,ans;
	cin>>t;
	set<int> myset;
	while(t--)
 {
     
     myset.clear();
 int x,i;
 for(i=1;i<=10;i++)
 {
     cin>>x;
     if(myset.insert(x).second==false)
    {
    ans=x;
    }
 }
 cout<<ans<<endl;
 }
	return 0;
}