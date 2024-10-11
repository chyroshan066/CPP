#include<iostream>
using namespace std;

int main(){
	
	//Arrays
	int marks[] = {10, 20, 30, 40};
	int i=0;
//	int marks[4];                            //Arrays can also be initialized in this way
//	marks[0]=10;
//	marks[1]=15;
//	marks[2]=20;
//	marks[3]=25;
	cout<< marks[0]<< "\t";
	cout<< marks[1]<< "\t";
	cout<< marks[2]<< "\t";
	cout<< marks[3]<< "\t";
	cout<< endl<< endl;
	cout<< "Printing arrays using while loop"<< endl;
	while(i<4){
		cout<< marks[i]<< "\t";
		i++;
	}
	cout<< endl<< endl;
	i=0;
	cout<< "Printing arrays using do while loop"<< endl;
	do{
		cout<< marks[i]<< "\t";
		i++;
	}while(i<4);
	cout<< endl<< endl;
	
	//Pointers to an array
	int* p;                                                      //Declaring pointer variable
	p=marks;                                                     //Assigning address to the pointer variable
	cout<< "The value of marks[0] is "<< *p<< endl;
	cout<< "The value of marks[1] is "<< *(p+1)<< endl;
	cout<< "The address of marks[0] is "<< p<< endl;
	int** q=&p;                                                  //Pointer to pointer variable. Stores the address of the pointer itself
	cout<< q<< endl;
	cout<< &p<< endl;
	cout<< "The value at address of address of q is "<< **q<< endl;
	
	return 0;
}
