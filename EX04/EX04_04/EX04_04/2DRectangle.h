#include <cmath>
using namespace std;

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle2D {
private:
	double x;
	double y;
	double width;
	double height;
	


public:
	//Constructors
	Rectangle2D() {
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	Rectangle2D(double X, double Y, double w, double h) {
		x = X;
		y = Y;
		width = w;
		height = h;
	}

	//Get and Set functions
	const double getX() { return x; }
	const double getY() { return y; }
	const double setX(double X) { x = X; }
	const double setY(double Y) { y = Y; }

	const double getWidth() { return width; }
	const double getHeight() { return height; }
	const double setWidth(double w) { width = w; }
	const double setHeight(double h) { height = h; }

	//Other behaviors
	const double area();

	const double perimeter();

	const bool contains(double X, double Y);

	const bool contains(const Rectangle2D &r);

	const bool overlaps(const Rectangle2D &r);
};

#endif