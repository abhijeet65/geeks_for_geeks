#include<bits/stdc++.h>
using namespace std;

struct Point{
	int x;
	int y;
};
int cross_product(Point p1,Point p2)
{
	return(p1.x * p2.y - p2.x * p1.y );
}

Point reset(Point p1,Point p2)
{
	p1.x=p1.x-p2.x;
	p1.y=p1.y-p2.y;
	return p1;
}
int solvedirection(Point a,Point b,Point p)
{
	b=reset(b,a);
	p=reset(p,a);
	
	int cross=cross_product(b,p);
	if(cross > 0)
	{
		return -1;
	}
	else if(cross < 0 )
		return 1;
	else
		return 0;
}
int main()
{
    
    Point a,b;
	cout<<"Entre the coordinate of line segment\n";
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;
	Point p;
	cout<<"Entre the codinates of point to determine the position\n";
	cin>>p.x>>p.y;
	int res=solvedirection(a,b,p);
	switch(res){
	case 1:cout<<"Right";break;
	case -1:cout<<"Left";break;
	case 0:cout<<"On the line it seems";break;
	default:"Invalid option";
	}
}

	
	
	