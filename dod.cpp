//dod.cpp

#include "dod.h"
#include "var.h"
#include "math.h"


using namespace nsVar;

void nsDod::dod()
{
	int R = 0;
	//R = ((x * n + 1) * x * n) / (2 * n + 1);
	R = pow(x, 2. * n + 1) / pow(x, 2. * n - 1);
	a *= R;
}