#include<bits/stdc++.h>
using namespace std;

bool comp(char *x,char *y){
	return(x<y);
}
int findRank(string s) {
    int n=s.length();
 
 char k[n+1];
 strcpy(k,s[0]);
 sort(k,k+n,comp);
 
 int i=0;
 
 while(next_permuation(k,k+n))
 {
	 
	if(s[i]==k[i])
		break;
 }
 return i;
    
}
int main()
{
	string str;
	cout<<"Enter the string\n";
	cin>>str;
	int ans=findRank(str);
	cout<<ans<<endl;
}
