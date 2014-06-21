#include "Complex.h"

int main(){
	Complex c1, c2, add, sub, mult, div;
	cout << "Enter first complex number" << endl;
	cin >> c1;
	cout << "Enter second complex number" << endl;
	cin >> c2;
	add=c1+c2;
	sub=c1-c2;
	mult=c1*c2;
	div=c1/c2;
	cout << "(" << c1.toString() << ") + (" << c2.toString() << ") = " << add.toString() << endl << endl;
	cout << "(" << c1.toString() << ") - (" << c2.toString() << ") = " << sub.toString() << endl << endl;
	cout << "(" << c1.toString() << ") * (" << c2.toString() << ") = " << mult.toString() << endl << endl;
	cout << "(" << c1.toString() << ") / (" << c2.toString() << ") = " << div.toString() << endl << endl;
	return 0;
}