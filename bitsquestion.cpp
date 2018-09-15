#include<bits/stdc++.h>

using namespace std;
int u,v,max_digit=0;


int countdigits(char a[],int n)
{
	int i,c=0;
	for(i=0;i<=n;i++)
	{
		//if(a[i]=='1')
			//c++;
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return c;
	
}

void combination(char a[],int l,int r,int n)
{
	int i;
	for(i=l;i<=r;i++)
	{
		if(a[i]=='0')
			a[i]='1';
		if(a[i]=='1')
			a[i]='0';
	}
	for(i=0;i<=n;i++)
		cout<<a[i]<" ";
	cout<<endl;
	
	/*int temp=countdigits(a,n);
	if(temp>max_digit){
		max_digit=temp;
         u=l;
		 v=r;
		}*/
		//cout<<u<<" "<<v<<" "<<max_digit;
}

int main()
{
	
	char b[20];

    cin>>b;
	int i,j;
	int l=strlen(b);
	int k=l-1;
	for(i=0;i<l;i++)
	{
		for(j=i;j<l;j++)
		{
			combination(b,i,j,k);
		}
	
}
//cout<<u<<" "<<v<<" "<<max_digit;
}


