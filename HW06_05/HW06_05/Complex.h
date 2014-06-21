#ifndef COMPEX_H
#define COMPLEX_H
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Complex{
public:
	double realNum;
	double imagNum;
	Complex(){
		realNum=0;
		imagNum=0;
	}
	Complex(double a){
		realNum=a;
	}
	Complex(double a, double b){
		realNum=a;
		imagNum=b;
	}
	double getReal(){
		return realNum;
	}
	double getImag(){
		return imagNum;
	}
	Complex add(Complex& secondNum){
		double a=realNum+secondNum.getReal();
		double b=imagNum+secondNum.getImag();
		return Complex(a,b);
	}
	Complex subtract(Complex& secondNum){
		double a=realNum-secondNum.getReal();
		double b=imagNum-secondNum.getImag();
		return Complex(a,b);
	}
	Complex multiply(Complex& secondNum){
		double a=realNum;
		double b=imagNum;
		double c=secondNum.getReal();
		double d=secondNum.getImag();
		double x=((a*c)-(b*d));
		double y=((b*c)+(a*d));
		return Complex(x,y);
	}
	Complex divide(Complex& secondNum){
		double a=realNum;
		double b=imagNum;
		double c=secondNum.getReal();
		double d=secondNum.getImag();
		double x=((a*c)+(b*d))/((c*c)+(d*d));
		double y=((b*c)-(a*d))/((c*c)+(d*d));
		return Complex(x,y);
	}
	double abs(){
		double base=(realNum*realNum)+(imagNum*imagNum);
		return sqrt(base);
	}
	string toString(){
		stringstream ss;
		ss << realNum;
		if (imagNum!=0){
			if (imagNum > 0){
			ss << "+" << imagNum << "i";
			}
			else{
				ss << imagNum << "i";
			}
		}
		return ss.str();
	}
	Complex& operator+=(Complex& secondComplex){
		*this=add(secondComplex);
		return *this;
	}
	Complex& operator-=(Complex& secondComplex){
		*this=subtract(secondComplex);
		return *this;
	}
	Complex& operator*=(Complex& secondComplex){
		*this=multiply(secondComplex);
		return *this;
	}
	Complex& operator/=(Complex& secondComplex){
		*this=divide(secondComplex);
		return *this;
	}
	double& operator[](int index){
		if (index==0)
			return realNum;
		else
			return imagNum;
	}
	Complex& operator++(){
		realNum++;
		return *this;
	}
	Complex& operator--(){
		realNum--;
		return *this;
	}
	Complex operator++(int dummy){
		Complex temp(realNum, imagNum);
		realNum++;
		return temp;
	}
	Complex& operator--(int dummy){
		Complex temp(realNum, imagNum);
		realNum--;
		return temp;
	}
	Complex operator+(){
		return *this;
	}
	Complex operator-(){
		return Complex (-realNum,-imagNum);
	}
};
ostream& operator<<(ostream& out, Complex& complex){
	out <<complex.toString();
	return out;
}
istream& operator>>(istream& in, Complex& complex){
	cout <<"a+bi" << endl <<"enter a: ";
	in >> complex.realNum;
	cout <<"enter b: ";
	in >> complex.imagNum;
	return in;
}
Complex operator+(Complex& c1, Complex& c2){
	return c1.add(c2);
}
Complex operator-(Complex& c1, Complex& c2){
	return c1.subtract(c2);
}
Complex operator*(Complex& c1, Complex& c2){
	return c1.multiply(c2);
}
Complex operator/(Complex& c1, Complex& c2){
	return c1.divide(c2);
}
#endif