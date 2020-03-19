#include "line.h"
#include "PolyReg.h"


int main()
{

	Line L(Color(12,13,14),Point(299,123),Point(988,322));
	L.Show();

	PolygoneRegulier P(Color (0,1,0), Point (100,200),50,5);
	P.Show();

	return 0;
}