#include<iostream>
using namespace std;

class Distance{
    private:
        int feet, inch;
    public:
        void setData(){
            cout<< "Enter the distance in feet inch format: ";
            cin>> feet>> inch;
        }
        void getData(){
            cout<< feet<< "ft "<< inch<< "inch";
        }
        friend Distance add(Distance, Distance);
};

Distance add(Distance o1, Distance o2){
    Distance temp;
    temp.inch = (o1.inch + o2.inch) % 12;
    temp.feet = (o1.feet + o2.feet + ((o1.inch + o2.inch) / 12));
    return temp;
}

int main(){
    Distance d1, d2, d3;
    d1.setData();
    d2.setData();
    d3 = add(d1, d2);
    cout<< "After adding: "<< endl;
    d1.getData();
    cout<< " + ";
    d2.getData();
    cout<< " = ";
    d3.getData();
    return 0;
}