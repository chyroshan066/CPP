#include <iostream>
using namespace std;

int main() {
   char name[10];
   char category[10];
   long telno;
   cout<<"Enter name, category and telephone no. ";
   cout<<'\n';
   cout<<"Type y if category is student otherwise type n \n ";
   cin>>name>>category>>telno;
   cout<<"Name Category Tel number ";
   cout<<'\n';
   cout<<name<<" "<<category<<" " <<telno;
   return 0;
}