#include <iostream>
#include<string>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	  char s1[100],s2[100];
	  scanf("%s%s",s1,s2);
	  
	  int n1=strlen(s1);
	  int n2=strlen(s2);
	  sort(s1,s1+n1);
	  sort(s2,s2+n2);
	  cout<<s1<<"\n"<<s2;
	  int f=strcmp(s1,s2);
	  if(f==0)
		  cout<<"YES\n";
	  else
		  cout<<"NO\n";
	  
	}
	return 0;
}