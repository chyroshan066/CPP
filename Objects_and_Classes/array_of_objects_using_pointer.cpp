#include<iostream>
using namespace std;

class ShopItem{
    private:
        int id;
        float price;
    public:
        void setData(int a, int b){
            id = a;
            price = b;
        }
        void getData(){
            cout<< "Code of this item is "<< id<< endl;
            cout<< "Price of this item is "<< price<< endl;
        }
};

int main(){
    int size = 2;
    int p;
    float q;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    for(int i=0; i<size; i++){
        cout<< "Enter id and price of the item"<< i+1<< ": ";
        cin>> p>> q;
        ptr->setData(p, q);
        ptr++;
    }
    for(int i=0; i<size; i++){
        cout<< "Item Number"<< i+1<< endl;
        ptrTemp->getData();
        cout<< endl;
        ptrTemp++;
    }
    return 0;
}