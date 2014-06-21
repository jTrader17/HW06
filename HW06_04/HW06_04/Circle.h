#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
public:
	Circle(){
		radius=1;
		numberOfObjects++;
	}
	Circle (double a){
		radius=a;
		numberOfObjects++;
	}
	double getArea() const{
		return radius*radius*3.14;
	}
	double getRadius () const{
		return radius;
	}
	void setRadius(double a){
		radius=a;
	}
	int getNumberOfObjects(){
		return numberOfObjects;
	}
	int compareTo(Circle& secondCircle) const{
		if (this->getRadius()>secondCircle.getRadius()){
			return 1;
		}
		else if (this->getRadius()==secondCircle.getRadius()){
			return 0;
		}
		else
			return -1;
	}
private:
	double radius;
	int numberOfObjects;
};

#endif