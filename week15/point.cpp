#include<bits/stdc++.h>
using namespace std;
struct Point {
	int x,y;//field ��/�ֶ�/����
};
void input(Point &z){//д����  
	cin>>z.x>>z.y;
}
void print(Point z){//ֻ������ 
	cout<<"("<<z.x<<","<<z.y<<")";
}
double dist(Point p,Point q){
	p.x++;
	double dx=p.x-q.x;
	double dy=p.y-q.y;
	return sqrt(dx*dx+dy*dy);
}
int main() {
	Point p,q;
	input(p);
	input(q);


	cout<<dist(p,q)<<endl;
	return 0;
}
