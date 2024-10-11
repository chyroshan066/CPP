#include<iostream>
#include<string>
using namespace std;

string swap(string, string);
string insert(string, string);
string find(string, string);
string replace(string, string);
string erase(string);
string append(string, string);
string substring(string);

int main(){
	string name, surname, rep="chow";
	cout<< "Enter name: ";
	cin>> name;
	cout<< "Enter surname: ";
	cin>> surname;
	cout<< "Before swapping name = "<< name<< " and surname = "<< surname<< endl;
	cout<< "The size of surname is "<< surname.size()<< endl;
	cout<< "The maximum possible size of surname is "<< surname.max_size()<< endl;
	cout<< "The actual memory occupied by name is "<< name.capacity()<< endl;
//	swap(name, surname);
//	insert(name, surname);
//	find(name, surname);
//	replace(surname, rep);
//	erase(surname);
//	append(name, surname);
	substring(surname);
	return 0;
}

string swap(string name, string surname){
	name.swap(surname);
	cout<< "After swapping name = "<< name<< " and surname = "<< surname<< endl;
}

string insert(string name, string surname){
	cout<< "After inserting the surname at second position = "<< name.insert(2, surname)<< endl;
}

string find(string name, string surname){
	cout<< "The position of string pattern \"han\" in \"Roshan\" is "<< name.find("han")<< endl;
}

string replace(string surname, string rep){
	cout<< "After replacing from 3-8 position, surname = "<< surname.replace(3,7,rep)<< endl;
}

string erase(string surname){
	cout<< "After removing the characters from 2-5 position, surname = "<< surname.erase(2,5)<< endl;
}

string append(string name, string surname){
	cout<< "After appending the string is = "<< name.append(surname)<< endl;
}

string substring(string surname){
	cout<< "The substring is = "<< surname.substr(2,5)<< endl;
}
