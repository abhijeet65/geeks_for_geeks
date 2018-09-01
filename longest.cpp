#include <bits/stdc++.h>
#include<string>
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int i;
	    string s;
	cin>>s;
	int n=s.length();
	cout<<n<<endl;
	int b[126];
	for(i=96;i<126;i++)
		b[i]=0;
	for(i=0;i<s.length();i++)
	{
	    b[s[i]]++;
	}
	for(i=96;i<126;i++)
	cout<<b[i]<<" ";
string k="";
    for(i=97;i<124;i++)
	{
		if(b[i]==1)
			k=k+(char)i;
	}
	cout<<k<<endl;
	}
	return 0;
}