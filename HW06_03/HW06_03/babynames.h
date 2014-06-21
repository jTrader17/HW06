#ifndef BABYNAMES_H
#define BABYNAMES_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class Namelist {
public:
	string name;
	string number;
	int rank;
	Namelist(string name, string number, int rank){
		this->name=name;
		this->number=number;
		this->rank=rank;
	}
	Namelist(){
		rank=1;
		number="1";
		name="Jason";
	}
};
#endif