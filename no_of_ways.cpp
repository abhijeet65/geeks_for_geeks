#include<bits/stdc++.h>
using namespace std;

int findmoves(int x,int y)
{
	if(x==0 || y==0)
		return 1;
	
	return(findmoves(x,y-1)+findmoves(x-1,y));
}

int main()
{
	int n=25;
    int ans=findmoves(25,25);
	cout<<ans;
	
}

