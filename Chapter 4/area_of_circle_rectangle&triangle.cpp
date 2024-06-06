#include<iostream>
#include<cmath>
# define PI 3.141
using namespace std;

float Area(int);
float Area(int, int);
float Area(int, int, int);

int main(){
	int choose, rad, l, b, a, c;
	cout<< "Depending on the area of the shape you want to calculate, enter the number accordingly: "<< endl<< "1.  Circle"<< endl<< "2.  Rectangle"<<endl<< "3.  Triangle"<< endl;
	cin>> choose;
	cout<< endl<< endl;
	if(choose==1){
		cout<< "Enter the radius of the circle: ";
		cin>> rad;
		Area(rad);
	}
	else if(choose==2){
		cout<< "Enter the length and breadth of the rectangle: ";
		cin>> l>> b;
		Area(l,b);
	}
	else if(choose==3){
		cout<< "Enter all three sides of the triangle: ";
		cin>> a>> b>> c;
		Area(a,b,c);	
	}
	else{
		cout<< "You entered the wrong number."<< endl<< " Enter only the options availabe.";
	}
	return 0;
}

float Area(int rad){
	float area;
	area=PI*(pow(rad, 2));
	cout<< "The area of circle is "<< area;
}

float Area(int l, int b){
	float area;
	area=l*b;
	cout<< "The area of rectangle is "<< area;
}

float Area(int a, int b, int c){
	float area, s;
	s=(a+b+c)/2;
	area= pow((s*(s-a)*(s-b)*(s-c)),(1/2));
	cout<< "The area of triangle is "<< area;
}
