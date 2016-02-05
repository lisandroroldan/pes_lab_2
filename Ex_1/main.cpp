#include <Complex.h>
using std::cout; using std::cin; using std::endl;

int main()
{
Complex a,b;
Complex &c=a;

a.realPart=12.5;
a.imagPart=-3.7;
b=a;

cout << "( " << a.realPart << "," << a.imagPart << " )" << endl;
cout << "( " << b.realPart << "," << b.imagPart << " )" << endl;
cout << "( " << c.realPart << "," << c.imagPart << " )" << endl;
return 0;
}
