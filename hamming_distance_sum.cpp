#include<bits/stdc++.h>
using namespace std;

int xoring(int x,int y)
{

int n=1,count=0,c;
for(c=32;c>0;c--)
{
	int p,q;
	p=x & n;
	q=y & n;
	if(p!=q)
		count++;
	n=n<<1;
}
cout<<count<<endl;
return count;
}
int hammingDistance(const vector<int> &A) {
int i,j;
int sum=0;
for(i=0;i<A.size();i++)
{
    for(j=0;j<A.size();j++)
    {
        sum+=xoring(A[i],A[j]);
    }
}
return sum;

}

int main()
{
	vector<int> a;
	a.push_back(2);
	a.push_back(4);
	a.push_back(6);
	int ans=hammingDistance(a);
	cout<<ans<<endl;
}
