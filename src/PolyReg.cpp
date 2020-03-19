#include "PolyReg.h"

PolygoneRegulier::PolygoneRegulier(const Color & color, const Point & Center, int Rayon, int NbrCotes) : FigureGeometrique(color)
{
	_nbrPoints = NbrCotes ;
	_points = new Point [NbrCotes];

	float Alpha ;
	for (int i = 0; i < NbrCotes; i++)
	{
		Alpha = i * PI * 2 / NbrCotes ;
		_points[i] = Point (Rayon * cos(Alpha) +  Center._x, Rayon * sin(Alpha) +  Center._y);
	}

}
void PolygoneRegulier::Show() const 
{
	std::string Msg = "PolygoneRegulier\tColor(" + std::to_string(_color._r) + ", " + std::to_string(_color._g) + ", " + std::to_string(_color._b) + ") Points [";
	for (int i = 0; i < _nbrPoints; i++)
	{
		Msg += " (" + std::to_string(_points[i]._x) + ", "+ std::to_string(_points[i]._y) + " ) ";
	}
	std::cout<<Msg<<"]\n";
}
int  PolygoneRegulier::getNbrPoints() const { return _nbrPoints ; }
const Point & PolygoneRegulier::getPoint(int indice) const { return _points[indice] ; }