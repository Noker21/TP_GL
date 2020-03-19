#ifndef STRUCT_H
#define STRUCT_H

struct Point
{
	int _x, _y;
	Point() : _x(0), _y(0) {}
	Point(int x, int y) : _x(x), _y(y) { }
};

struct Color
{
	double _r, _g, _b ;
	Color(double r, double g, double b) : _r(r), _g(g), _b(b) {}
};

#endif //STRUCT_H
