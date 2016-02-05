typedef double Real;
typedef int Int;

class Complex
{
public:
Complex();
Complex(Real,Real);
~Complex();
void setRealPart(const Real&);
void setImagPart(const Real&);
Real real();
Real imag();
Real abs();

private:
Real realPart;
Real imagPart;
};
