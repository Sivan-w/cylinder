#include<iostream>
using namespace std;

class Hight
{
	float h;
public:
	Hight(int y) { h = y; }
	float geth()
	{
		return h;
	}
};
class Circle
{
	float r;
public:
	Circle(float x) { r = x; }
	float getr()
	{
		return r;
	}
};
class Cylinder:public Hight,public Circle
{
public:
	Cylinder(float x, float y):Hight(y),Circle(x){}
	void tiji()
	{
		float S, H, R;
		H = geth();
		R = getr();
		S = 3.14 * R * R * H;
		cout << "体积为" << S << endl;
	}
	void bmj()
	{
		float H, R;
		H = geth();
		R = getr();
		cout << "表面积为" << 6.28 * R * R + 6.28 * R * H << endl;
	}
};
int main()
{
	Cylinder s(5, 3);
	s.tiji();
	s.bmj();
	return 0;
}