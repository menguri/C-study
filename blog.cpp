#include <iostream>
#include <string.h>
#include <string>
using namespace std;


class Average
{
	private:
		double x_;
		double y_;
	
	public:
		Average(double x_, double y_);
		Average operator-(const Average& other);
		friend Average operator+(const Average& var1, const Average& var2);
		void Display();
};

Average operator+(const Average& var1, const Average& var2);

int main()
{
	// 1
	Average me = Average(7, 9);
	Average you = Average(4.4, 7.7);
	Average me_you = me + you;
	me_you.Display();
	return 0;
}

Average::Average(double x_, double y_)
{
	x_ = x_;
	y_ = y_;
}

Average Average::operator-(const Average& other)
{
	return Average((x_ + other.x_)/2,(y_ + other.y_)/2);
}

void Average::Display()
{
	cout << "x, yÀÇ ÁÂÇ¥: " << x_ << "," << y_ << endl;
}

Average operator+(const Average& var1, const Average& var2)
{
	return Average((var1.x_ + var2.x_)*2, (var1.y_ + var2.y_)*2);
}
