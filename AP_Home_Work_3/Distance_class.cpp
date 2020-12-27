#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class Point{
	
	int x;
	int y;
	
	int validate(int number);
	
public: 

	Point(int X , int Y);
	
	 int getX();
	 
	 int getY();
	 
	float getDistance(int X, int Y );
};
	
int Point::validate(int number){
		if(number>INT_MIN && number<INT_MAX) return number;
		else return 0;
	}
	
	
 Point::Point(int X , int Y){
	   x=validate(X);
	   y=validate(Y);
	 
	}
	
int Point::getX(){
	 	return x;
	 }
	 
int Point::getY(){
	 	return y;
	 }
	
float Point::getDistance(int X, int Y ){
	  	return(sqrt((X-x)*(X-x)+((Y-y)*(Y-y))));
	}

int main(int argc, char** argv) {
	       Point point1(3,5);
	       Point point2(4,6);
	       cout<<"The distance between these 2 points is: "<<point1.getDistance(point2.getX(),point2.getY())<<endl;

	return 0;}

