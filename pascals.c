#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, coef = 1, space, i, j;

    printf("Enter number of rows: ");
    scanf("%d",&rows);
 vector<vector<int>> v;
    for(i=0; i<rows; i++)
    {
        for(space=1; space <= rows-i; space++)
            printf("  ");

        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;
                 v[i].push_back(coef);
            //printf("%4d", coef);
        }
        printf("\n");
    }
	vector<int>::iterator it;
	for(i=0;i<rows;i++){
	for(it=v[i].begin;it!=v[i].end();it++)
		cout<<*it<<" ";
	cout<<endl;
	}
    return 0;
}