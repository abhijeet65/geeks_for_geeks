#include<bits/stdc++.h>
using namespace std;


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
int main(){
int c=0;
int i;
for(i=2;i<=100;i++)
if(isprime(i)){
c++;
cout<<i<<" ";
}
cout<<c;

}
