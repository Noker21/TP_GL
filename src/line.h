#ifndef LINE_H
#define LINE_H
#include "FigureGeo.h"


class Line : FigureGeometrique
{
	private:
		Point _p0, _p1 ;
	public:
		Line(const Color & color, const Point & P0, const Point & P1);
		void Show() const ;
		const Point & getP0() const;
		const Point & getP1() const;
};

#endif //LINE_H
