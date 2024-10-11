#include<iostream>
#include<cmath>
#define PI 3.1413

using namespace std;

class simpleCalculator{
    private:
        int data1, data2;
    public:
        void getData(){
            cout<< "Enter two numbers: ";
            cin>> data1>> data2;
        }

        int sum(){
            return (data1 + data2);
        }

        int difference(){
            return (data1 - data2);
        }

        int product(){
            return (data1 * data2);
        }

        int quotient(){
            return (data1 / data2);
        }

        void display(){
            cout<< data1<< " + "<< data2<< " = "<< sum()<< endl;
            cout<< data1<< " - "<< data2<< " = "<< difference()<< endl;
            cout<< data1<< " * "<< data2<< " = "<< product()<< endl;
            cout<< data1<< " / "<< data2<< " = "<< quotient()<< endl;
        }
};

class scientificCalculator{
    private:
        float angle;
    public:
        void getData(){
            cout<< "Enter angle in degree: ";
            cin>> angle;
        }

        float sine(){
            return sin((angle * PI) / 180);
        }

        float cosine(){
            return cos((angle * PI) / 180);
        }

        float tangent(){
            return tan((angle * PI) / 180);
        }

        float radian(){
            return ((angle * PI) / 180);
        }

        void display(){
            cout<< "sin("<< angle<< ") = "<< sine()<< endl;
            cout<< "cos("<< angle<< ") = "<< cosine()<< endl;
            cout<< "tan("<< angle<< ") = "<< tangent()<< endl;
            cout<< angle<< "degree = "<< radian()<< "radian"<< endl;
        }
};

class hybridCalculator: public simpleCalculator, public scientificCalculator{
    public:
        void getData(){
            simpleCalculator::getData();
            scientificCalculator::getData();
        }

        void display(){
            simpleCalculator::display();
            scientificCalculator::display();
        }
};

int main()
{
    hybridCalculator h;
    h.getData();
    h.display();
    return 0;
}