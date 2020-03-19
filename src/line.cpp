#include "line.h"

Line::Line(const Color & color, const Point & P0, const Point & P1) : FigureGeometrique(color), _p0(P0), _p1(P1) { }

void Line::Show() const 
{
	std::cout<<"Line\tColor("<<_color._r<<", "<<_color._g<<", "<<_color._b<<")\t P0("<<_p0._x<<", "<<_p0._y<<")\tP1("<<_p1._x<<", "<<_p1._y<<")\n";
}

const Point & Line::getP0() const { return _p0 ;}
const Point & Line::getP1() const { return _p1 ;}