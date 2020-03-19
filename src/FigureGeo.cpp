#include "FigureGeo.h"

FigureGeometrique::FigureGeometrique(const Color &color) : _color(color) {  }

const Color & FigureGeometrique::getColor() const { return _color ; }