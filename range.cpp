#include<bits/stdc++.h>
#include<math.h>

using namespace std;
int isperfect(int m)
{
	double ans=sqrt(m);
	int p=sqrt(m);
	if(p!=ans)
		return 0;
	else
		return 1;
	
}
int checknum(int x){
	int r;
	while(x>0)
	{
		r=x%10;
		if(!isperfect(r)){
			return 0;
		}
		x=x/10;
	}
	return 1;
	
}



int main()
{
int t;
cin>>t;
while(t--)
{
int a,b;
cin>>a>>b;
int c=0,square=0;
int init=sqrt(a);
square=init*init;
while(square<a){
	init++;
square=init*init;

}


while(square<=b && square>=a)
{
init++;
//cout<<"evaluate"<<square<<endl;
int good=checknum(square);
if(good==1)
	c++;
square=init*init;

}
cout<<c<<endl;
}

}


