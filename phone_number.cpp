#include<bits/stdc++.h>
#include<cstdio>
#define row 10
#define col 5

using namespace std;

void printwords(char table[row][col],int current,int a[],char result[],int n)
{
    if(current==n){
    printf("%s ",result);
    return;
    }
    int i;
    for(i=0;i<strlen(table[a[current]]);i++)
    {
        result[current]=table[a[current]][i];
        printwords(table,current+1,a,result,n);
        if(a[current]==0 || a[current]==1)
        return;
    }
}


int main()
 {
	//code
	int t;
	cin>>t;
	char table[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	while(t--)
	{
	    
	    
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    char result[n+1]; 
        result[n] ='\0'; 
	    
	    printwords(table,0,a,result,n);
	    cout<<endl;
	    
	}
	
	return 0;
}

