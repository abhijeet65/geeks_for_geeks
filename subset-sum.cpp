/*8. Find a subset of a given set S = {sl, s2,.....,sn} of n positive integers whose sum is equal to
a given positive integer d. For example, if S={1, 2, 5, 6, 8} and d = 9 there are two
solutions{1,2,6}and{1,8}. A suitable message is to be displayed if the given problem
instance doesn't have a solution.

*/

#include <iostream>
#include <stdlib.h>
#define MAX 20
using namespace std;
int stk[MAX];
int set[MAX];
int size;
int top = -1;
int c=1;
void push(int x)
{
 if(top==MAX-1)
 {
 cout<<"No more place";
 exit(0);
 }
 else
 stk[++top]=x;
}
void pop()
{
 if(top<0)
 {
 cout<<"No elements";
 exit(0);
 }
 else
 top--;
}
void display()
{
 cout<<"Solution "<<c<<":";
 c++;
for (int i=0; i<=top; i++)
cout << stk[i] << " ";
 cout<<endl;
}
int subset(int pos, int sum)
{
int i;
static int foundSoln = 0;
if(sum>0)
{
for(i=pos;i<=size;i++)
{
push(set[i]);
subset(i+1,sum-set[i]);
pop();
}
}
if(sum==0)
{
display();
foundSoln = 1;
}
return foundSoln;
}
int main()
{
int i,sum;
cout<<"Enter the maximum number of elements:";
cin>>size;
cout<<"Enter the elements:\n";
for(i=1;i<=size;i++)
 cin>>set[i];
cout<<"Enter the required sum:";
cin>>sum;
 cout<<"\n";
if (!subset(1, sum))
cout<<"No solution";
return 0;
}