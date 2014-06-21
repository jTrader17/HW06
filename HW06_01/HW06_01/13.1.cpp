#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main (){
	fstream out;
	srand(time(NULL));
	out.open("Excercise13_1.txt",ios::out | ios::app);
	for (int i=0; i<100; i++){
		out << rand()%100 << " ";
	}
	out.close();
	cout <<"done!" << endl;
	return 0;
}