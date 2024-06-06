#include<iostream>
using namespace std;

                                 //STRUCTURE
//struct employee{
//	int empId;
//	string name;                      //We can't use char[25] to create string like that in C. Instead we need to use "string" data type. 
//	float salary;
//};

//struct employee{
//	int empId;
//	string name;                      
//	float salary;                     //Directly assigning the var_name to the struct data type
//}roshan;

struct {                             //Which is also valid. When var_name is directly assigned to the struct data type, it is not always necessary to write struct_name
	int empId;
	string name;                      
	float salary;                     //Directly assigning the var_name to the struct data type
}roshan;

//typedef struct employee{           //"typedef" keyword is necessary to change the struct_name
//	int empId;
//	string name;                      
//	float salary;
//}emp;                                 //Changing the name of structure

                                 //UNION
union money{
	int rice;
	char car;
	float pound;
};

int main(){ 
//	struct employee roshan;           
//	employee roshan;                   //Which is also valid
//	emp roshan;                 
	roshan.empId = 1;
	roshan.name = "Chaudhary";
	roshan.salary = 8000;
	cout<< roshan.empId<< endl;
	cout<< roshan.name<< endl;
	cout<< endl<< endl;
	
	money m1;
	m1.rice=95;
	m1.car='l';                        //In union, only one value to the member can be assigned at a time
	cout<< m1.rice<< endl;             //So, it gives garbage value
	cout<< m1.car<< endl;              //The value which is given to the later member is displayed correct
	cout<< endl<< endl;
	
	                             //ENUM
	enum Meal{Breakfast, Lunch=4, Dinner};
	Meal c1=Dinner;
//	cout<< c1;
	cout<< Breakfast<< endl;
	cout<< Lunch<< endl;
	cout<< Dinner<< endl;
	
	return 0;
}
