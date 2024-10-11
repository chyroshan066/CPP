#include<iostream>
using namespace std;

class Shop{
    private:
        int itemId[100];
        int itemPrice[100];
        int counter;
    public:
        void initCounter(){
            counter = 0;
        }
        void setPrice();
        void displayPrice();
};

void Shop::setPrice(){
    cout<< "Enter Id of your item"<< counter+1<< " :";
    cin>> itemId[counter];
    cout<< "Enter Price of your item"<< counter+1<< " :";
    cin>> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(){
    for(int i=0; i<counter; i++)
        cout<< "The price of item with Id "<< itemId[i]<< " is "<< itemPrice[i]<< endl;
}

int main(){
    Shop Pasal;
    Pasal.initCounter();
    Pasal.setPrice();
    Pasal.setPrice();
    Pasal.setPrice();
    Pasal.displayPrice();
    return 0;
}

