#include<stdio.h>
#include<stdlib.h>
int main()
{
int array[20][20],v,i,j,count=0;
int job[10],z,sum,indegree[20],flag;
printf("Enter the number of vertices\n");
scanf("%d",&v);
printf("Enter the adjacency matrix\n");
for(i=0;i<v;i++)
{
for(j=0;j<v;j++)
{
scanf("%d",&array[i][j]);
}
}
while(count<v)
{
for(i=0;i<v;i++)
{
sum=0;
if(indegree[i]!=-1)
{
for(j=0;j<v;j++)
{
sum+=array[j][i];
}
indegree[i]=sum;
}
}
 flag=0;
for(i=0;i<v;i++)
{
if(indegree[i]==0)
{
z=i;
flag=1;
break;
}
}
if(!flag)
{
printf("The above graph cannot be sorting using topology sort");
exit(0);
}
for(j=0;j<v;j++)
array[z][j]=0;
indegree[z]=-1;
job[count]=z+1;
count++;
}
printf("The Topological order is \n");
for(i=0;i<count;i++)
printf("%d\t",job[i]);
printf("\n");
return 0;
}