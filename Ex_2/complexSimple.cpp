#include <complexSimple.h>
#include <math.h>

Real Complex::real()
{
return realPart;
}

Real Complex::imag()
{
return imagPart;
}

Real Complex::abs()
{
return sqrt(realPart*realPart+imagPart*imagPart);
}

Complex::Complex()
{
realPart=0.0;
imagPart=0.0;
}

Complex::Complex(Real x, Real y)
{
realPart=x;
imagPart=y;
}

Complex::~Complex(){
}

void Complex::setRealPart(const Real& a)
{
realPart=a;
}
void Complex::setImagPart(const Real& a)
{
imagPart=a;
}

