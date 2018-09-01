#include<bits/stdc++.h>
#define n 4
using namespace std;

bool isSafe(int queen[n][n],int row,int col)
{
int i,j;

for(i=0;i<col;i++)
if(queen[row][i])
return false;

    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (queen[i][j])
            return false;
 
    /* Check lower diagonal on left side */
    for (i=row, j=col; j>=0 && i<n; i++, j--)
        if (queen[i][j])
            return false;
 
    return true;
}
bool solvequeen(int queen[n][n],int col)
{
int i;
if(col>=n)
return true;
for(i=0;i<n;i++){

if(isSafe(queen,i,col))
{
queen[i][col]=1;
if(solvequeen(queen,col+1)
return true;
queen[i][col]=0;
}
}
return false;
}


int main()
{
int queen[n][n],i,j;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
queen[i][j]=0;

if(solvequeen(queen,0)==false)
cout<<"no solution\n";
printsol(queen);
}

