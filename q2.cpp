#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
	
public:
	
	void setx(int x) {
		this->x = x;
	}

	void sety(int y) {
		this->y = y;
	}

	int getx() {
		return x;
	}

	int gety() {
		return y;
	}

	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	void distance(int x, int y) {
		int ans = 0;
		int xsquare;
		int ysquare;
		xsquare = (x - this->x) * (x - this->x);
		ysquare= (y-this->y) * (y - this->y);
		ans = sqrt(xsquare + ysquare);
		cout << "Distance between the two poins is: " << ans << endl;
	}

};
int main() {
	Point p(2, 3);
	p.distance(9, 4);
}