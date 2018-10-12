#include <iostream>
#include <stdlib.h>
#define MAX 20
using namespace std;
int stk[MAX];
int set[MAX];
int size;
int top = -1;
int c=1;
int count=0;
int isprime(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
	{
	if(x%i==0)
    return 0; 		
	}
	return 1;
}
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
 int sum=0;
for(int i=0; i<=top; i++)
sum=sum+stk[i];
if(isprime(sum))
	count++;
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

for(i=0;i<=size;i++)
	cin>>set[i];

 cout<<"\n";
if (!subset(1, sum))
cout<<"No solution";
return 0;
}