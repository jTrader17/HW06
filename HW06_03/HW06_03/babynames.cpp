#include "babynames.h"
void importYearData (string location, vector<Namelist>& yearmale, vector<Namelist>& yearfemale){
	ifstream in;
	in.open(location);
	string boysName, girlsName, boyNum, girlNum;
	int rank;
	for (int i=0; i<1000; i++){
		in >> rank >> boysName >> boyNum >> girlsName >> girlNum;
		in.get();
		Namelist tempg(girlsName,girlNum,rank);
		Namelist tempb(boysName,boyNum,rank);
		yearfemale.push_back(tempg);
		yearmale.push_back(tempb);
	}
	in.close();
}

int main(){
	string 
	file2000="c:\\users\\Jason\\desktop\\babynameranking2000.txt",
	file2001="c:\\users\\Jason\\desktop\\babynameranking2001.txt", 
	file2002="c:\\users\\Jason\\desktop\\babynameranking2002.txt",
	file2003="c:\\users\\Jason\\desktop\\babynameranking2003.txt",
	file2004="c:\\users\\Jason\\desktop\\babynameranking2004.txt",
	file2005="c:\\users\\Jason\\desktop\\babynameranking2005.txt",
	file2006="c:\\users\\Jason\\desktop\\babynameranking2006.txt",
	file2007="c:\\users\\Jason\\desktop\\babynameranking2007.txt",
	file2008="c:\\users\\Jason\\desktop\\babynameranking2008.txt",
	file2009="c:\\users\\Jason\\desktop\\babynameranking2009.txt",
	file2010="c:\\users\\Jason\\desktop\\babynameranking2010.txt";
	vector<Namelist> b2000,b2001,b2002,b2003,b2004,b2005,b2006,b2007,b2008,b2009,b2010,g2000,g2001,g2002,g2003,g2004,g2005,g2006,g2007,g2008,g2009,g2010;
	importYearData(file2000,b2000,g2000);
	importYearData(file2001,b2001,g2001);
	importYearData(file2002,b2002,g2002);
	importYearData(file2003,b2003,g2003);
	importYearData(file2004,b2004,g2004);
	importYearData(file2005,b2005,g2005);
	importYearData(file2006,b2006,g2006);
	importYearData(file2007,b2007,g2007);
	importYearData(file2008,b2008,g2008);
	importYearData(file2009,b2009,g2009);
	importYearData(file2010,b2010,g2010);
	cout << "Baby name popularity query:" << endl;
	cout << "Enter the year (between 2000-2010): ";
	int year;
	cin >> year;
	cout << "Enter the gender (m/f): ";
	char gender;
	cin >> gender;
	cout << "Enter name (case-sensitive): ";
	string name;
	cin >> name;
	bool check=false;
	if (year==2000){
		if (gender=='m'){
			for (int i=0; i<1000; i++){
				if (b2000[i].name==name){
					cout << b2000[i].name << " is ranked #" << b2000[i].rank << " with " << b2000[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else if (gender=='f'){
			for (int i=0; i<1000; i++){
				if (g2000[i].name==name){
					cout << g2000[i].name << " is ranked #" << g2000[i].rank << " with " << g2000[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else{
			cout << "Gender is not valid." << endl;
		}
	}

	else if (year==2001){
		if (gender=='m'){
			for (int i=0; i<1000; i++){
				if (b2001[i].name==name){
					cout << b2001[i].name << " is ranked #" << b2001[i].rank << " with " << b2001[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else if (gender=='f'){
			for (int i=0; i<1000; i++){
				if (g2001[i].name==name){
					cout << g2001[i].name << " is ranked #" << g2001[i].rank << " with " << g2001[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else{
			cout << "Gender is not valid." << endl;
		}
	}

	else if (year==2002){
		if (gender=='m'){
			for (int i=0; i<1000; i++){
				if (b2002[i].name==name){
					cout << b2002[i].name << " is ranked #" << b2002[i].rank << " with " << b2002[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else if (gender=='f'){
			for (int i=0; i<1000; i++){
				if (g2002[i].name==name){
					cout << g2002[i].name << " is ranked #" << g2002[i].rank << " with " << g2002[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else{
			cout << "Gender is not valid." << endl;
		}
	}

	else if (year==2003){
		if (gender=='m'){
			for (int i=0; i<1000; i++){
				if (b2003[i].name==name){
					cout << b2003[i].name << " is ranked #" << b2003[i].rank << " with " << b2003[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else if (gender=='f'){
			for (int i=0; i<1000; i++){
				if (g2003[i].name==name){
					cout << g2003[i].name << " is ranked #" << g2003[i].rank << " with " << g2003[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else{
			cout << "Gender is not valid." << endl;
		}
	}

	else if (year==2004){
		if (gender=='m'){
			for (int i=0; i<1000; i++){
				if (b2004[i].name==name){
					cout << b2004[i].name << " is ranked #" << b2004[i].rank << " with " << b2004[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else if (gender=='f'){
			for (int i=0; i<1000; i++){
				if (g2004[i].name==name){
					cout << g2004[i].name << " is ranked #" << g2004[i].rank << " with " << g2004[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else{
			cout << "Gender is not valid." << endl;
		}
	}

	else if (year==2005){
		if (gender=='m'){
			for (int i=0; i<1000; i++){
				if (b2005[i].name==name){
					cout << b2005[i].name << " is ranked #" << b2005[i].rank << " with " << b2005[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else if (gender=='f'){
			for (int i=0; i<1000; i++){
				if (g2005[i].name==name){
					cout << g2005[i].name << " is ranked #" << g2005[i].rank << " with " << g2005[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else{
			cout << "Gender is not valid." << endl;
		}
	}

	else if (year==2006){
		if (gender=='m'){
			for (int i=0; i<1000; i++){
				if (b2006[i].name==name){
					cout << b2006[i].name << " is ranked #" << b2006[i].rank << " with " << b2006[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else if (gender=='f'){
			for (int i=0; i<1000; i++){
				if (g2006[i].name==name){
					cout << g2006[i].name << " is ranked #" << g2006[i].rank << " with " << g2006[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else{
			cout << "Gender is not valid." << endl;
		}
	}

	else if (year==2007){
		if (gender=='m'){
			for (int i=0; i<1000; i++){
				if (b2007[i].name==name){
					cout << b2007[i].name << " is ranked #" << b2007[i].rank << " with " << b2007[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else if (gender=='f'){
			for (int i=0; i<1000; i++){
				if (g2007[i].name==name){
					cout << g2007[i].name << " is ranked #" << g2007[i].rank << " with " << g2007[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else{
			cout << "Gender is not valid." << endl;
		}
	}

	else if (year==2008){
		if (gender=='m'){
			for (int i=0; i<1000; i++){
				if (b2008[i].name==name){
					cout << b2008[i].name << " is ranked #" << b2008[i].rank << " with " << b2008[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else if (gender=='f'){
			for (int i=0; i<1000; i++){
				if (g2008[i].name==name){
					cout << g2008[i].name << " is ranked #" << g2008[i].rank << " with " << g2008[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else{
			cout << "Gender is not valid." << endl;
		}
	}

	else if (year==2009){
		if (gender=='m'){
			for (int i=0; i<1000; i++){
				if (b2009[i].name==name){
					cout << b2009[i].name << " is ranked #" << b2009[i].rank << " with " << b2009[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else if (gender=='f'){
			for (int i=0; i<1000; i++){
				if (g2009[i].name==name){
					cout << g2009[i].name << " is ranked #" << g2009[i].rank << " with " << g2009[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else{
			cout << "Gender is not valid." << endl;
		}
	}

	else if (year==2010){
		if (gender=='m'){
			for (int i=0; i<1000; i++){
				if (b2010[i].name==name){
					cout << b2010[i].name << " is ranked #" << b2010[i].rank << " with " << b2010[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else if (gender=='f'){
			for (int i=0; i<1000; i++){
				if (g2010[i].name==name){
					cout << g2010[i].name << " is ranked #" << g2010[i].rank << " with " << g2010[i].number << " babies named that." << endl;
					check=true;
					break;
				}
			}
			if (!check){
				cout << "The name " << name << " is not ranked in the year " << year << endl;
			}
		}
		else{
			cout << "Gender is not valid." << endl;
		}
	}

	else{
		cout << "Not a valid year." << endl;
	}

	return 0;
}