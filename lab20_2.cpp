#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1,Rect *r2){
	
	double w=0,h=0;
	double a=max(r1->x,r2->x);
	double b=min(r1->x+r1->w,r2->x+r2->w);
	double j=min(r1->y,r2->y);
	double k=max(r1->y-r1->h,r2->y-r2->h);
	if(b>=a) w=b-a;
	if(j>=k) h=j-k;
	return w*h;
}
