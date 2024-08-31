#include<iostream>
using namespace std;

template <class T1, class T2>
void testfun(T1 a, T2 b){
    cout<< a<< " "<< b<< endl;
}

int main()
{
    int inum = 5;
    float fnum = 7.5;
    testfun(inum, fnum);
    testfun(20, "Let's make a better world");
    testfun(15.3, 17L);
    return 0;
}
