#include<iostream>
using namespace std;

class student{
	int roll;
	char name[20];
	char phone[10];
	public:
		void getdata();
		void showdata();
};

int main(){
	student s1, s2;
	cout<< "Enter details for first student: "<< endl;
	s1.getdata();
	cout<< endl<< "Enter details for second student: "<< endl;
	s2.getdata();
	cout<< endl<< endl;
	cout<< "First Student"<< endl;
	s1.showdata();
	cout<< endl<< endl;
	cout<< "Second Student"<< endl;
	s2.showdata();
	return 0;
}

void student::getdata(){
			cout<< "Enter Roll No: ";
			cin>> roll;
			cout<< "Enter Name : ";
			cin>> name;
			cout<< "Enter Phone Number: ";
			cin>> phone;
}

void student::showdata(){
			cout<< "Name: "<< name<< endl;
			cout<< "Roll No: "<< roll<< endl;
			cout<< "Phone Number: "<< phone<< endl;
}
