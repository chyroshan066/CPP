#include<iostream>
#include<string>
using namespace std;

struct students{
	string name;
	int rollNo;
	string address;
	long int phoneNo;
};

int main(){
	int n, retrieveStudentRollNo, kathmanduStudent=0;
	
	cout<< "Enter the number of students whose data is to be evaluated: ";
	cin>> n;
	cout<< endl<< endl;
	
	students stud[n];
	
	for(int i=0; i<n; i++){
		cout<< "Enter the data of student "<< i<< endl;
		cout<< "Name: ";
		cin>> stud[i].name;
		cout<< "Roll Number: ";
		cin>> stud[i].rollNo;
		cout<< "Address: ";
		cin>> stud[i].address;
		cout<< "Phone Number: ";
		cin>> stud[i].phoneNo;
	}
	
	cout<< "Enter the roll number of student whose data you want to retrieve: ";
	cin>> retrieveStudentRollNo;
	
	for(int i=0; i<n; i++){
		if(retrieveStudentRollNo==stud[i].rollNo){
			cout<< "Name: "<< stud[i].name<< endl;
			cout<< "Roll Number: "<< stud[i].rollNo<< endl;
			cout<< "Address: "<< stud[i].address<< endl;
			cout<< "Phone Number: "<< stud[i].phoneNo<< endl;
		}
		if(stud[i].address=="kathmandu" || stud[i].address=="Kathmandu")
			kathmanduStudent++;
	}
	cout<< endl<< endl;
	
	cout<< "The number of student living in kathmandu is "<< kathmanduStudent;
	
	return 0;
}
