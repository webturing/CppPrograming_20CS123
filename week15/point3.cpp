#include<bits/stdc++.h>
using namespace std;
struct Point {
	int x,y;//field ��/�ֶ�/����
};
void input(Point &z) { //д����
	cin>>z.x>>z.y;
}
void print(Point z) { //ֻ������
	cout<<"("<<z.x<<","<<z.y<<")";
}
double dist(Point p,Point q) {
	double dx=p.x-q.x;
	double dy=p.y-q.y;
	return sqrt(dx*dx+dy*dy);
}
int main() {
	Point p,q,r;
	input(p),input(q),input(r);
	double a=dist(p,q);
	double b=dist(p,r);
	double c=dist(q,r);
	double s=(a+b+c)/2;
	double S=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<fixed<<S<<endl;
	return 0;
}
