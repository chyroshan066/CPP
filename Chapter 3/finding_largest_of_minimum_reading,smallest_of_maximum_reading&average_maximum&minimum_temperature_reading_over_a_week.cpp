#include<iostream>
using namespace std;

int main(){
	float minTemp[7], maxTemp[7];
	float avgMaxTemp, avgMinTemp;
	
	cout<< "Enter the maximum and minumum temperature over a week starting form sunday to saturday accordingly: "<< endl;
	cout<< endl<< endl;
	
	for(int i=0; i<7; i++){
		if(i==0)
			cout<< "For Sunday:"<< endl;
		else if(i==1)
			cout<< "For Monday:"<< endl;
		else if(i==2)
			cout<< "For Tuesday:"<< endl;
		else if(i==3)
			cout<< "For Wednesday:"<< endl;
		else if(i==4)
			cout<< "For Thursday:"<< endl;
		else if(i==5)
			cout<< "For Friday:"<< endl;
		else
			cout<< "For Saturday:"<< endl;
		cout<< "Maximum Temperature: ";
		cin>> maxTemp[i];
		cout<< "Minimum Temperature: ";
		cin>> minTemp[i];
		cout<< endl;
	}
	
	float smallMaxTemp=maxTemp[0], largeMinTemp=minTemp[0];
	for(int i=0; i<7; i++){
		if(maxTemp[i]<smallMaxTemp)
			smallMaxTemp = maxTemp[i];
		if(minTemp[i]>largeMinTemp)
			largeMinTemp = minTemp[i];
		avgMaxTemp+=maxTemp[i];
		avgMinTemp+=minTemp[i];
	}
	
	cout<< "The average maximum temperature over a week is "<< avgMaxTemp<< endl;
	cout<< "The average minimum temperature over a week is "<< avgMinTemp<< endl;
	cout<< "The largest minimum temperature over a week is "<< largeMinTemp<< endl;
	cout<< "The smallest maximum temperature over a week is "<< smallMaxTemp<< endl;
	
	return 0;
}
