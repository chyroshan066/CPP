#include<iostream>
using namespace std;

int main(){
	int a=5, b=6;
	
	cout<< "Hello World"<< endl<< "Welcome to the new world"<< endl;   //endl changes the line
	cout<< endl<< endl;
	
	//Increment or Decrement operator
	cout<< "The value of a++ is "<< a++<< endl;  //First prints then increases the value by 1
	cout<< "The value of a-- is "<< a--<< endl;  //First prints then decreases the value by 1
	cout<< "The value of ++a is "<< ++a<< endl;  //First increases the value by 1 and then prints
	cout<< "The value of --a is "<< --a<< endl;  //First decreases the value by 1 and then prints
	cout<< endl<< endl;
	
	//Comparator operator
	cout<< "The value a==b is "<< (a==b)<< endl;
	cout<< "The value a<b is "<< (a<b)<< endl;
	cout<< "The value a<=b is "<< (a<=b)<< endl;
	cout<< "The value a>=b is "<< (a>=b)<< endl;
	cout<< "The value a>b is "<< (a>b)<< endl;
	cout<< endl<< endl;
	
	//Logical operator
	cout<< "The value of ((a<b) && (a<=b)) logical AND operator is "<< ((a<b) && (a<=b))<< endl;
	cout<< "The value of ((a>b) && (a>=b)) logical AND operator is "<< ((a>b) && (a>=b))<< endl;
	cout<< "The value of ((a<b) || (a==b)) logical OR operator is "<< ((a<b) || (a==b))<< endl;
	cout<< "The value of (!(a==b)) logical NOT operator is "<< (!(a==b))<< endl;
	
	return 0;
}
