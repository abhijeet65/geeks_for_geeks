#include<bits/stdc++.h>
#include<ctype.h>
#include<algorithm>
#include<string>
using namespace std;

int isPalindrome(string A) {
    string s="";
	string st="";
	int i;
    for(i=0;i<A.length();i++)
    {
     if(isalnum(A[i]))
	 {
		  if(isupper(A[i]))
			  A[i]=A[i]+32;
		  s=s+A[i];
	 }
    
    }
	int c=0;
	int l=0;
    int h=s.length()-1;
	while (h > l)
    {
        if (s[l++] == s[h--])
        c++;
        
    }
	
	cout<<s;
    if(c==s.length()-1)
		return 1;
	else
		return 0;
 
}

int main()
{
	string s;
	
	cout<<"Enter the string\n";
	getline(cin,s);
    int ans=isPalindrome(s);
	if(ans==1)
		cout<<"yes"<<endl;
	else
		cout<<"NO"<<endl;
}	

