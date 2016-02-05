#include "complexSimple.h"

using std::cout; using std::cin; using std::endl;

Int main()
{
Complex a,b;
Complex &c=a;

a.realPart=3;
a.imagPart=-3;
b.realPart=2;
b.imagPart=-2;




cout << "( " << a.realPart << "," << a.imagPart << " )" << endl;
cout << "( " << b.realPart << "," << b.imagPart << " )" << endl;
cout << "( " << c.realPart << "," << c.imagPart << " )" << endl;


return 0;
}
