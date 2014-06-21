#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
	string fileName;
	//fileName="c:\\users\\Jason\\desktop\\Hi.txt";
	//ofstream out;
	//out.open(fileName);
	//out << "Hi" << endl << "wait" << endl;
	//out.close();
	cout << "file name please: " << endl;
	cin >> fileName;
	ifstream input;
	input.open(fileName);
	if(!input){
		cout << "didn't work" << endl;
	}
	char b[256];
	int sum=0;
	while (input.getline(b, 256)){
		cout << b << endl;
		sum+=input.gcount();
	}
	cout << "There are " << sum << " characters." << endl;
	input.close();
	return 0;
}