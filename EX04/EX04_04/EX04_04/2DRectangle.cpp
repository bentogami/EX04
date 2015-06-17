#include "2DRectangle.h"
using namespace std;

const double Rectangle2D::area() {
	return width * height;
}

const double Rectangle2D::perimeter() {
	return 2 * width + 2 * height;
}

const bool Rectangle2D::contains(double X, double Y) {
	return (X < (x + width / 2) && X > (x - width / 2) &&
		Y < (y + height / 2) && Y > (y - height / 2));
}

const bool Rectangle2D::contains(const Rectangle2D &r) {
	Rectangle2D rec = r;
	double xMax = rec.getX() + rec.getWidth() / 2;
	double yMax = rec.getY() + rec.getHeight() / 2;
	double xMin = rec.getX() - rec.getWidth() / 2;
	double yMin = rec.getY() - rec.getHeight() / 2;
	return (xMax < x + width / 2 && xMin > x - width / 2
		&& yMin > y - height / 2 && yMax < y + height / 2);
}

const bool Rectangle2D::overlaps(const Rectangle2D &r) {
	Rectangle2D rec = r;
	return (x - rec.getX() <= width + rec.getWidth()
		&& y - rec.getY() <= height + rec.getHeight());
}