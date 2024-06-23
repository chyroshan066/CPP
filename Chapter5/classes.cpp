#include<iostream>
using namespace std;

class iteminfo{
	private:
		int itemid;
		float cost;
	public:
		void setdata(int it, float cst){
			itemid=it;
			cost=cst;
		}
		void showdata(){
			cout<< "\nItem ID: "<< itemid;
			cout<< "\nCost: "<< cost;
		}
};

int main(){
	iteminfo i1, i2;
	i1.setdata(55, 35.50);
	i2.setdata(555, 135.25);
	cout<< "\n Information on first Item: ";
	i1.showdata();
	cout<< "\n Information on second Item: ";
	i2.showdata(); 
	return 0;
}
