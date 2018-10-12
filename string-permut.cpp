//#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<ctype.h>
using namespace std;

/*vector<string> v;

void swap(char *x,char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void permut(char *str,int l,int r)
{
    int i;
    if(l==r)
    {
        v.push_back(str);
        
    }
    else{
    for(i=l;i<=r;i++)
    {
        swap(str+l,str+i);
        permut(str,l+1,r);
        swap(str+l,str+i);
    }
    }
}
*/

int main() {
		int t;
	cin>>t;
	while(t--)
	{
	    stringstream str;
	    int n;
	 char str1[100];
		cin>>n;
		str>>n;
int i;
		cout<<n;
		cout<<str;
	    int len=str.length();
		for(i=0;i<len-1;i++)
			str1[i]=str[i];
		for(i=0;i<len-1;i++)
			cout<<str1[i];
	  /* n=strlen(str);
	    permut(str,0,n-1);
	    vector<string>::iterator it;
	    sort(v.begin(),v.end());
	    //print(v);
	   for(it=v.begin();it!=v.end();it++)
	    {
	        cout<<*it<<" ";
	    }
	    cout<<endl;
	   
	   int c=v.size();
	   cout<<c;
	}*/
}
	return 0;
}

