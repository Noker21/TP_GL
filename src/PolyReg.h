#ifndef POLYREG_H
#define POLYREG_H
#include "FigureGeo.h"
#include <math.h>
#define PI 3.14159265358979323846

class PolygoneRegulier : FigureGeometrique
{
	private:
		int _nbrPoints;
		Point* _points;
	public:
		PolygoneRegulier(const Color & color, const Point & Center, int Rayon, int NbrCotes);
		void Show() const ;
		int  getNbrPoints() const;
		const Point & getPoint(int indice) const;
};

#endif //POLYREG_H
