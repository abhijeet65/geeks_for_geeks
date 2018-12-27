#include<bits/stdc++.h>
#include<cstdio>
#define inf 9999;

using namespace std;

char grid[10][10];

int moves(int n,int stX,int stY,int endX,int endY,int c)
{
    if(endX==stX && endY==stY)
    return c;
    if(endX==stX)
		return moves(n,stX,stY,endX,endY-1,c+1);
	if(endY==stY)
		return moves(n,stX,stY,endX-1,endY,c+1);
    if(endX=='X' || endY=='X')
    {
        return inf;
    }
    return(min(moves(n,stX,stY,endX-1,endY,c+1),moves(n,stX,stY,endX,endY-1,c+1)));
}


int main()
{
    int n;
	cout<<"Enter the number of rows and colm";
    cin>>n;
int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
int startX,startY,endX,endY;
cin>>startX>>startY>>endX>>endY;
int c=0;
int ans=moves(n,startX,startY,endX,endY,c);
cout<<ans<<endl;

}