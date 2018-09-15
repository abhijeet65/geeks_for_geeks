#include<bits/stdc++.h>

using namespace std;

int a[100];
int stk[100];
int top=-1;

void push(int x){
	if(top>=100)
		cout<<"MAX reached on stack";
	else
		top++;
	stk[top]=x;
}

void pop()
{
	if(top<0)
		cout<<"Empty Array\n";
	top--;
}

void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		cout<<stk[i]<<" ";
		
	}
	cout<<endl;
}
int solve(int pos,int sum,int n)
{
	int i;
	static int foundsol=0;
	if(sum<0)
		return -1;
	if(sum>0)
	{
		for(i=pos;i<=n;i++)
		{
			push(a[i]);
			solve(i+1,sum-(a[i]*a[i]),n);
			pop();
			
		}
	}
	if(sum==0)
	{
		foundsol=1;
		display();
		return 1;
	}
	return foundsol;
}
int main()
{
	int n;
	cin>>n;
	int size=sqrt(n);
	
	int i;
	for(i=1;i<=size;i++)
	{
		a[i]=i;
		
	}

	//for(i=1;i<=size;i++)
		//cout<<a[i]<<" ";
	cout<<endl;
	if(!solve(1,n,size))
		cout<<"NO SOlution Exits\n";
}
/*program for finding the set of numbers whoose square sum results to a particular numbers
example-n=100;
so set of solutions are 1.(1,3,4,5,7)
2.(6,8)
3.(10);

i.e 10^2==100
i.e 1^2+3^2+4^2+5^2+7^2==100
i.e 6^2+8^2==100
*/
