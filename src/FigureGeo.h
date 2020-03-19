#ifndef FIGUREGEO_H
#define FIGUREGEO_H

#include "iostream"
#include "struct.h"



class FigureGeometrique
{
	protected:
		Color _color;
	public:
		FigureGeometrique(const Color & color);
		const Color & getColor() const	;
};

#endif //FIGUREGEO_H
