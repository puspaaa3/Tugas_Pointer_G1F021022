#include <iostream>

using namespace std;

int main()
{
     int a, b, c, *p1, *p2, *p3;

     a = 10;
     b = 15;
     c = 27;
     p1 = &a;
     p2 = &b;
     cout << "a = " << a <<endl;
	 cout << "b = " << b <<endl;
	 cout << "c = " << c <<endl;
	 cout << "p1 = " << p1 <<endl;
	 cout << "p2 = " << p2 <<endl;
	 cout << "p3 = " << p3 <<endl<<endl;

     *p1 = c;
     cout << "a = " << a <<endl;
	 cout << "b = " << b <<endl;
	 cout << "c = " << c <<endl;
	 cout << "p1 = " << p1 <<endl;
	 cout << "p2 = " << p2 <<endl;
	 cout << "p3 = " << p3 <<endl<<endl;

     a = *p2;
     b = 6;
     p3 = &b;
     cout << "a = " << a <<endl;
	 cout << "b = " << b <<endl;
	 cout << "c = " << c <<endl;
	 cout << "p1 = " << p1 <<endl;
	 cout << "p2 = " << p2 <<endl;
	 cout << "p3 = " << p3 <<endl<<endl;

     p3 = &c;
     *p1 = *p3;
     cout << "a = " << a <<endl;
	 cout << "b = " << b <<endl;
	 cout << "c = " << c <<endl;
	 cout << "p1 = " << p1 <<endl;
	 cout << "p2 = " << p2 <<endl;
	 cout << "p3 = " << p3<<endl;

     return 0;
}
