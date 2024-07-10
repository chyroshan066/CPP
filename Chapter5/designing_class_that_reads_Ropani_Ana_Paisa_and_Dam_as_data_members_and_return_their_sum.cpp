#include<iostream>
using namespace std;

class LandMeasure{
    private:
        int Ropani, Ana, Paisa, Dam;
    public:
        void setData(){
            cout<< "Enter Ropani: ";
            cin>> Ropani;
            cout<< "Enter Ana: ";
            cin>> Ana;
            cout<< "Enter Paisa: ";
            cin>> Paisa;
            cout<< "Enter Dam: ";
            cin>> Dam;
        }
        void getData(){
            cout<< Ropani<< "ropani "<< Ana<< "ana "<< Paisa<< "paisa "<< Dam<< "dam";
        }
        friend LandMeasure sum(LandMeasure, LandMeasure);
};

LandMeasure sum(LandMeasure o1, LandMeasure o2){
    LandMeasure temp;
    temp.Dam = (o1.Dam + o2.Dam) % 4;
    temp.Paisa = (o1.Paisa + o2.Paisa + ((o1.Dam + o2.Dam) / 4)) % 4;
    temp.Ana = (o1.Ana + o2.Ana + (o1.Paisa + o2.Paisa + ((o1.Dam + o2.Dam) / 4)) / 4) % 16;
    temp.Ropani = (o1.Ropani + o2.Ropani + (o1.Ana + o2.Ana + (o1.Paisa + o2.Paisa + ((o1.Dam + o2.Dam) / 4)) / 4) / 16);
    return temp;
}

int main(){
    LandMeasure l1, l2, l3;
    cout<< "Enter for Land1: "<< endl;
    l1.setData();
    cout<< "Enter for Land2: "<< endl;
    l2.setData();
    l3 = sum(l1, l2);
    l1.getData();
    cout<< " + ";
    l2.getData();
    cout<< " = ";
    l3.getData();
    return 0;
}