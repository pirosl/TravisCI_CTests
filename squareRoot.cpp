#include "squareRoot.h"
#include <cmath>

using namespace std;

double squareRoot(double n)
{
	if(n < 0)
		return -1;
	return sqrt(n);
}
