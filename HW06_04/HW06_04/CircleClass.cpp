#include <iostream>
#include "Circle.h"
using namespace std;

bool operator==(Circle& c1, Circle& c2){
	return(c1.compareTo(c2)==0);
}
bool operator!=(Circle&c1, Circle&c2){
	return(c1.compareTo(c2)!=0);
}
bool operator< (Circle&c1, Circle&c2){
	return(c1.compareTo(c2)<0);
}
bool operator>(Circle&c1, Circle&c2){
	return(c1.compareTo(c2)>0);
}
bool operator<=(Circle&c1, Circle&c2){
	return(c1.compareTo(c2)<1);
}
bool operator>=(Circle&c1, Circle&c2){
	return(c1.compareTo(c2)>-1);
}

int main(){
	Circle c1(3.4);
	Circle c2 (3.3);
	Circle c3 (3.4);
	Circle c4 (3.5);
	if (c1==c3)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (c1==c4)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (c1<=c2)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (c1<=c4)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (c1>=c4)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (c1>=c2)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (c1<c3)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (c1<c4)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (c1>c3)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (c1>c2)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (c1!=c3)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	if (c1!=c4)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}