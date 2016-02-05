#include <iostream>

typedef double Real;
typedef int Int;

class Complex
{
public:
Real real();
Real imag();
Real abs();
private:
Real realPart;
Real imagPart;
};
