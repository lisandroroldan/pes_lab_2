#include <iostream>
#include <complexSimple.h>
#include <math.h>

using std::cout; using std::cin; using std::endl;

int main()
{
Real a1, a2;

a1=1.0;
a2=2.0;


Complex a (a1,a2);

cout << "( " << a.real() << "," << a.imag() << " )" << endl;

a.setRealPart(3);



cout << "( " << a.real() << "," << a.imag() << " )" << endl;


return 0;

}
