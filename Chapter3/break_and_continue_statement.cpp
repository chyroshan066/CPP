#include<iostream>
using namespace std;

int main(){
//	for(int i=1; i<=5; i++){
//		cout<< i<< "\t";
//		if(i==2)
//			break;                  //Executes the loop when encounters i=2
//	}

	for(int i=1; i<=5; i++){
		if(i==2)
			continue; 
		cout<< i<< "\t";            //Skips the loop when encounters i=2 and pushes to the next iteration
	}
	
	return 0;
}
