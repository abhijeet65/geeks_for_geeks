#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	char str1[100];
	scanf("%s",str1);
	char str2[100];
	scanf("%s",str2);
	int c=0,i,j;
	for(i=0;i<strlen(str2);i++)
	{
		for(j=0;j<strlen(str1);j++)
		{
			if(str1[j]==str2[i]){
				c++;
			break;
			}
	    }
	}
	cout<<c<<endl;
	
}
}
